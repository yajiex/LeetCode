!function(e){function n(r){if(t[r])return t[r].exports;var i=t[r]={exports:{},id:r,loaded:!1};return e[r].call(i.exports,i,i.exports,n),i.loaded=!0,i.exports}var t={};return n.m=e,n.c=t,n.p="",n(0)}([function(e,n){"use strict";self.addEventListener("install",function(e){e.waitUntil(caches.open("v2").then(function(e){return e.addAll(["/bundle/index.bundle.js","/bundle/index.bundle.css","/index.html","/assets/icon.png","/assets/favicon.ico"])}))}),self.addEventListener("activate",function(e){var n=["v2"];e.waitUntil(caches.keys().then(function(e){return Promise.all(e.map(function(e){if(n.indexOf(e)===-1)return caches.delete(e)}))}))}),self.addEventListener("fetch",function(e){e.respondWith(caches.match(e.request).then(function(n){if(n)return n;var t=e.request.clone();return fetch(t).then(function(n){if(!n||200!==n.status||"basic"!==n.type)return n;var t=n.clone();return caches.open("v2").then(function(n){n.put(e.request,t)}),n})}))})}]);
//# sourceMappingURL=sw.bundle.js.map