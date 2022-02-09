import { css } from "@emotion/react";
import { ComponentPropsWithRef, ForwardedRef } from "react";

export interface HeaderProps extends ComponentPropsWithRef<"header"> {
  forwardRef?: ForwardedRef<HTMLHeadingElement>;
}

const common = css`
  width: 100%;
  height: 44px;
  display: flex;
  align-items: center;
  padding: 0 16px;
  background: var(--black);
  color: var(--white);
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
