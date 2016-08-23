To improve the loading performance, the following tips are used:

- [Commit: Drop devicon font file](https://github.com/yajiex/LeetCode/commit/1df8d014210aba193672dfa6fa1ad0961836e3dc)
   Drop devicon font file, use svg instead
- [Commit: Ensure svg is only requested once](https://github.com/yajiex/LeetCode/commit/2d38662f0458b97d74757c3c8dfc38f8806e7f72)
   Ensure svg file is only queried once, using [CSS Modules](https://github.com/css-modules/css-modules)
- [Commit: Use production build](https://github.com/yajiex/LeetCode/commit/6f01e99956bebebe84e1c69d3e1173427de8abdc)
   Use production build
- [Commit: reduce bundle size by using production devtool option](https://github.com/yajiex/LeetCode/commit/005b2c7aeec4a7e141867c79d6776f9c5f4a81f2)
   [Reduce bundle size](https://github.com/reactjs/redux/issues/809), change `devtool` from `eval` to `source-map`
- [Commit: Eliminate render-blocking JavaScript and CSS](https://github.com/yajiex/LeetCode/commit/3e07d8770aecf7ace41fb58e5f516e6d9d7f09f5)
   Eliminate render-blocking JavaScript and CSS (inline small styles and async js)
- [Commit: Use service worker](https://github.com/yajiex/LeetCode/commit/bd7280549f8a979de2482d31d9b14a3abf3e7e4c)
   Service Worker (all from cache), of course, enable github pages https
- [Commit: Use extract-text-webpack-plugin to generate native css output file](https://github.com/yajiex/LeetCode/commit/34205cedabb48a40930d91289b631f3fbc35458a)
   Generate native css output file to ensure large stylesheets can be cached and asynchronous downloading
- [Commit: Wipe old cache when updating service worker](https://github.com/yajiex/LeetCode/commit/b020866f2b4d3628214504c4d48e74910f751d7d)
   Wipe old cache when updating service worker (this commit is an appendix for last commit(use extract-text-webpack-plugin to generate native css output file)
- ...On going

![Loading Time](https://cloud.githubusercontent.com/assets/16146902/17876158/843f9dde-690a-11e6-8703-a55c2e748a9a.png)