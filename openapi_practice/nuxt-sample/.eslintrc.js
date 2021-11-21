module.exports = {
  root: true,
  parser: "vue-eslint-parser",
  parserOptions: {
    parser: "@typescript-eslint/parser",
  },
  extends: ["@nuxtjs/eslint-config-typescript", "prettier"],
  rules: {
    "vue/no-multiple-template-root": "off",
    "vue/multi-word-component-names": "off",
    "vue/attribute-hyphenation": "off",
    "vue/no-mutating-props": "off",
    "no-console": "error",
    "vue/no-v-html": "off",
  },
};
