import { css } from "@emotion/react";
import Link from "next/link";
import { ComponentPropsWithRef, ForwardedRef } from "react";
import { colors } from "styles/themes";

export interface LinkCardProps extends ComponentPropsWithRef<"a"> {
  path: string;
  forwardRef?: ForwardedRef<HTMLLinkElement>;
}

const common = css`
  width: 100%;
  max-width: 300px;
  display: flex;
  justify-content: center;
  align-items: center;
  border: 2px solid ${colors.black.lighten[1]};
  border-radius: 16px;
  padding: 24px 20px;
  font-size: 2.4rem;
  font-weight: bold;
  box-shadow: 0 3px 6px ${colors.black.lighten[3]};
  cursor: pointer;
`;

export const LinkCard = ({
  path,
  forwardRef,
  children,
  ...props
}: LinkCardProps): JSX.Element => {
  return (
    <Link href={path} ref={forwardRef} {...props}>
      <a css={common}>{children}</a>
    </Link>
  );
};
