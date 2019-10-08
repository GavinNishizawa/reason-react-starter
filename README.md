# reason-react-starter

This is a reason-react starter project based on the merged output of
[create-react-app](https://github.com/facebook/create-react-app) and
[reason-react](https://github.com/reasonml/reason-react).


## Run Project

```sh
# install dependencies
npm install
# in one tab start bsb watcher to automatically build .js from .re
npm run bsb:start
# in another tab start react-scripts dev server
npm start
```

## Build for Production

```sh
# build js from reason
npm run bsb:build
# build webpack bundle in build/ directory
npm run build
```
