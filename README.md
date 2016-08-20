To improve the loading performance, the following tips are used:

- Drop devicon font file, use svg instead
- Ensure svg file is only queried once, using [CSS Modules](https://github.com/css-modules/css-modules)
- Use production build
- [Reduce bundle size](https://github.com/reactjs/redux/issues/809), change `devtool` from `eval` to `source-map`
- Eliminate render-blocking JavaScript and CSS (inline small styles and async js)
- Service Worker (all from cache), of course, enable github pages https
- ...On going

![Loading Time](https://cloud.githubusercontent.com/assets/16146902/17828620/fc616f88-66c9-11e6-821b-6f5664f8d0a8.png)