import {
  Dispatch,
  ForwardedRef,
  Fragment,
  SetStateAction,
  useState
} from "react";
import { useRecoilState } from "recoil";
import { Container } from "~/component/layout/Container";
import { FlexContainer } from "~/component/layout/FlexContainer";
import { Header } from "~/component/shared/Header";
import { numberState } from "~/state/number";

export interface IndexProps {
  num1: number;
  setNum1: Dispatch<SetStateAction<number>>;
  forwardRef?: ForwardedRef<HTMLDivElement>;
}

export const IndexTemplate = ({ num1, setNum1 }: IndexProps): JSX.Element => {
  const [number, setNumber] = useRecoilState(numberState);

  return (
    <Fragment>
      <Header />
      <main>
        <Container>
          <h1>Hello, world!</h1>
          <FlexContainer justifyContent="center" alignItems="center" gap={32}>
            <FlexContainer
              flexDirection="column"
              justifyContent="center"
              gap={12}
            >
              <h3>use useState</h3>
              <h4>{num1}</h4>
              <button onClick={() => setNum1(num1 + 1)}>push!!</button>
            </FlexContainer>
            <FlexContainer
              flexDirection="column"
              justifyContent="center"
              gap={12}
            >
              <h3>use Recoil</h3>
              <h4>{number.value}</h4>
              <button onClick={() => setNumber({ value: number.value + 1 })}>
                push!!
              </button>
            </FlexContainer>
          </FlexContainer>
        </Container>
      </main>
    </Fragment>
  );
};
