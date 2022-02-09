import { css } from "@emotion/react";
import { ComponentPropsWithRef, ForwardedRef } from "react";
import { colors } from "styles/themes";

export interface HeaderProps extends ComponentPropsWithRef<"header"> {
  forwardRef?: ForwardedRef<HTMLHeadingElement>;
}

const common = css`
  width: 100%;
  height: 44px;
  display: flex;
  align-items: center;
  padding: 0 16px;
  background: ${colors.black.primary};
  color: ${colors.white};
`;

export const Header = ({ forwardRef }: HeaderProps): JSX.Element => {
  const header = css`
    ${common};
  `;

  return (
    <header css={header} ref={forwardRef}>
      <h1>This is Header</h1>
    </header>
  );
};
