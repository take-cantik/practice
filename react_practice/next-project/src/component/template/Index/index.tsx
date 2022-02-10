import { Fragment } from "react";
import { Container } from "~/component/layout/Container";
import { GridContainer } from "~/component/layout/GridContainer";
import { Header } from "~/component/shared/Header";
import { LinkCard } from "~/component/shared/LinkCard";

export const IndexTemplate = () => {
  return (
    <Fragment>
      <Header />
      <main>
        <Container>
          <GridContainer>
            <LinkCard path="/state">state</LinkCard>
            <LinkCard path="/firebase">firebase</LinkCard>
          </GridContainer>
        </Container>
      </main>
    </Fragment>
  );
};
