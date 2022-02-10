import Link from "next/link";
import { ComponentPropsWithRef, ForwardedRef } from "react";

export interface LinkCardProps extends ComponentPropsWithRef<"a"> {
  path: string;
  forwardRef?: ForwardedRef<HTMLLinkElement>;
}

export const LinkCard = ({
  path,
  forwardRef,
  children,
  ...props
}: LinkCardProps): JSX.Element => {
  return (
    <Link href={path} ref={forwardRef} {...props}>
      <a>{children}</a>
    </Link>
  );
};
