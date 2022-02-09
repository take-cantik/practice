import { Dispatch, ForwardedRef, SetStateAction } from "react";
import { FlexContainer } from "../layout/FlexContainer";

export interface UseStateNumberBoxProps {
  number: number;
  setNumber: Dispatch<SetStateAction<number>>;
  forwardRef?: ForwardedRef<HTMLDivElement>;
}

export const UseStateNumberBox = ({
  number,
  setNumber,
  forwardRef
}: UseStateNumberBoxProps): JSX.Element => {
  return (
    <FlexContainer
      flexDirection="column"
      justifyContent="center"
      gap={12}
      ref={forwardRef}
    >
      <h3>use useState</h3>
      <h4>{number}</h4>
      <button onClick={() => setNumber(number + 1)}>push!!</button>
    </FlexContainer>
  );
};
