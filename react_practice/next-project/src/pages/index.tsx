import type { NextPage } from "next";
import { Fragment } from "react";
import { Header } from "~/component/shared/Header";

const Home: NextPage = () => {
  return (
    <Fragment>
      <Header />
      <h1>Hello, world!</h1>
    </Fragment>
  );
};

export default Home;
