// Utils.re based on version from
// https://github.com/reasonml-community/reason-react-hacker-news.git

/* require css file for side effect only */
[@bs.val] external requireCSS: string => unit = "require";

/* require an asset (eg. an image) and return exported string value (image URI) */
[@bs.val] external requireAssetURI: string => string = "require";
