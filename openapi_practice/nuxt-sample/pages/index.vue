<template>
  <div class="main">
    <h1 v-for="word in words" :key="word.id" class="main__hello">
      {{ word.content }}
    </h1>
  </div>
</template>

<script lang="ts">
import {
  defineComponent,
  ref,
  useContext,
  useFetch,
} from "@nuxtjs/composition-api";
import axios, { AxiosResponse } from "axios";

interface Texts {
  id: string;
  contents: string;
}

interface Response {
  currentPage: number;
  data: Texts[];
}

export default defineComponent({
  setup() {
    const words = ref<Texts[]>();
    const { $config } = useContext();

    const { fetch } = useFetch(async () => {
      const responses: AxiosResponse<Response> = await axios.get(
        `${$config.apiURL}/texts`
      );

      words.value = responses.data.data;
    });

    fetch();

    return {
      words,
    };
  },
});
</script>

<style lang="scss" scoped>
.main {
  width: 100%;
  height: 100%;
  display: flex;
  align-items: center;
  justify-content: center;
  flex-flow: column;

  &__hello {
    font-size: 28px;
  }
}
</style>
