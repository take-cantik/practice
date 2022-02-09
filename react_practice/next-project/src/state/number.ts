import { atom } from "recoil";

export interface NumberState {
  value: number;
}

export const numberState = atom<NumberState>({
  key: "number",
  default: {
    value: 0
  }
});
