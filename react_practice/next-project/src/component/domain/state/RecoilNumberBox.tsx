import { css } from "@emotion/react";
import { ForwardedRef } from "react";
import { useRecoilState } from "recoil";
import { colors } from "styles/themes";
import { numberState } from "~/state/number";
import { FlexContainer } from "~/component/layout/FlexContainer";

export interface RecoilNumberBoxProps {
  forwardRef?: ForwardedRef<HTMLDivElement>;
}

const box = css`
  width: 100%;
  max-width: 240px;
  border-radius: 16px;
  padding: 20px;
  box-shadow: 0 3px 6px ${colors.black.lighten[3]};
`;

const title = css`
  align-self: start;
  font-size: 2rem;
  font-weight: bold;
`;

const num = css`
  color: ${colors.black.lighten[1]};
  font-size: 3.6rem;
  font-weight: bold;
`;

const button = css`
  width: 100%;
  max-width: 160px;
  height: 32px;
  border: solid 2px ${colors.black.primary};
  border-radius: 16px;
  background: ${colors.white};
  font: bold 1.6rem var(--montserrat);
  line-height: 30px;
`;

export const RecoilNumberBox = ({
  forwardRef
}: RecoilNumberBoxProps): JSX.Element => {
  const [number, setNumber] = useRecoilState(numberState);

  return (
    <FlexContainer
      flexDirection="column"
      justifyContent="center"
      alignItems="center"
      gap={20}
      css={box}
      ref={forwardRef}
    >
      <h3 css={title}>use Recoil</h3>
      <h4 css={num}>{number.value}</h4>
      <button
        onClick={() => setNumber({ value: number.value + 1 })}
        css={button}
      >
        push!!
      </button>
    </FlexContainer>
  );
};
