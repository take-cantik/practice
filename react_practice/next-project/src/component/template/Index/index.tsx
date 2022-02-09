import { Dispatch, ForwardedRef, Fragment, SetStateAction } from "react";
import { Container } from "~/component/layout/Container";
import { FlexContainer } from "~/component/layout/FlexContainer";
import { Header } from "~/component/shared/Header";
import { RecoilNumberBox } from "~/component/shared/RecoilNumberBox";
import { UseStateNumberBox } from "~/component/shared/UseStateNumberBox";

export interface IndexProps {
  num1: number;
  setNum1: Dispatch<SetStateAction<number>>;
  forwardRef?: ForwardedRef<HTMLDivElement>;
}

export const IndexTemplate = ({ num1, setNum1 }: IndexProps): JSX.Element => {
  return (
    <Fragment>
      <Header />
      <main>
        <Container>
          <h1>Hello, world!</h1>
          <FlexContainer justifyContent="center" alignItems="center" gap={32}>
            <UseStateNumberBox number={num1} setNumber={setNum1} />
            <RecoilNumberBox />
          </FlexContainer>
        </Container>
      </main>
    </Fragment>
  );
};
