import type { NextPage } from "next";
import { Fragment } from "react";
import { useRecoilState } from "recoil";
import { Header } from "~/component/shared/Header";
import { numberState } from "~/state/number";

const Home: NextPage = (): JSX.Element => {
  const [number, setNumber] = useRecoilState(numberState);

  return (
    <Fragment>
      <Header />
      <h1>Hello, world!</h1>
      <h2>{number.value}</h2>
      <button onClick={() => setNumber({ value: number.value + 1 })}>
        push!!
      </button>
    </Fragment>
  );
};

export default Home;
