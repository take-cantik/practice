import { ForwardedRef } from "react";
import { useRecoilState } from "recoil";
import { numberState } from "~/state/number";
import { FlexContainer } from "../layout/FlexContainer";

export interface RecoilNumberBoxProps {
  forwardRef?: ForwardedRef<HTMLDivElement>;
}

export const RecoilNumberBox = ({
  forwardRef
}: RecoilNumberBoxProps): JSX.Element => {
  const [number, setNumber] = useRecoilState(numberState);

  return (
    <FlexContainer
      flexDirection="column"
      justifyContent="center"
      gap={12}
      ref={forwardRef}
    >
      <h3>use Recoil</h3>
      <h4>{number.value}</h4>
      <button onClick={() => setNumber({ value: number.value + 1 })}>
        push!!
      </button>
    </FlexContainer>
  );
};
