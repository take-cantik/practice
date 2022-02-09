import { css } from "@emotion/react";
import { Dispatch, ForwardedRef, Fragment, SetStateAction } from "react";
import { colors } from "styles/themes";
import { Container } from "~/component/layout/Container";
import { FlexContainer } from "~/component/layout/FlexContainer";
import { GridContainer } from "~/component/layout/GridContainer";
import { Header } from "~/component/shared/Header";
import { RecoilNumberBox } from "~/component/shared/RecoilNumberBox";
import { UseStateNumberBox } from "~/component/shared/UseStateNumberBox";

export interface IndexProps {
  num1: number;
  setNum1: Dispatch<SetStateAction<number>>;
  forwardRef?: ForwardedRef<HTMLDivElement>;
}

const main = css`
  width: 100%;
  padding: 44px 0;
  background: ${colors.black.lighten[4]};
`;

const boxes = css`
  width: 100%;
  max-width: 512px;
  align-self: center;
`;

export const IndexTemplate = ({ num1, setNum1 }: IndexProps): JSX.Element => {
  return (
    <Fragment>
      <Header />
      <main css={main}>
        <Container>
          <FlexContainer flexDirection="column">
            <h1>This is using useState and Recoil page!</h1>
            <GridContainer
              cols={{ sp: 1, tablet: 2, pc: 2 }}
              space={32}
              css={boxes}
            >
              <UseStateNumberBox number={num1} setNumber={setNum1} />
              <RecoilNumberBox />
            </GridContainer>
          </FlexContainer>
        </Container>
      </main>
    </Fragment>
  );
};
