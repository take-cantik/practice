import type { NextPage } from "next";
import { useState } from "react";
import { StateTemplate } from "~/component/template/State";

const State: NextPage = (): JSX.Element => {
  const [num1, setNum1] = useState<number>(0);

  return <StateTemplate num1={num1} setNum1={setNum1} />;
};

export default State;
