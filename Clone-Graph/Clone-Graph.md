## 题意：
复制一个图

## 要求：


## 思路：
1. 这题明说, label 独一无二, 那么就可以使用 hash map 存储元素

2. BFS 搜索, 边搜边向 hash map 添加元素

3. 在设置标记位上 TLE 了 N 次, 一个元素一旦被假如到 hash map, 就说明该元素已经被访问到了并已被假如到 queue 中, 同时环的问题也被克服了. 我在做的时候, 把环的问题拉出来单独处理, 但标记忘记了

4. unordered_map<node*, node*> 这种设置不是第一次见到了, 比设置成 unordered_map<int, node*> 要方便一些

5. map.count 比 map.find 要精练一些

6. 加入 map 时, 可以直接 map[] = xxx, 不用判断是否已有

## 更新：
总结leetcode搜索题目

