import type { NextPage } from "next";
import { useState } from "react";
import { IndexTemplate } from "~/component/template/Index";

const Home: NextPage = (): JSX.Element => {
  const [num1, setNum1] = useState<number>(0);

  return <IndexTemplate num1={num1} setNum1={setNum1} />;
};

export default Home;
