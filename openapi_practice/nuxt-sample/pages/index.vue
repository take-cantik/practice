<template>
  <div class="main">
    <h1 class="main__hello">{{ hello }}</h1>
  </div>
</template>

<script lang="ts">
import { defineComponent, ref } from "@nuxtjs/composition-api";

export default defineComponent({
  setup() {
    const hello = ref<string>("Hello, world!");

    return {
      hello,
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

  &__hello {
    font-size: 28px;
  }
}
</style>
