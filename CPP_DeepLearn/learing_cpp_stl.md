# STL vector,map,list,set,hash_map

##1.速度比较 
  list的插入和删除因为是直接操作指针的指向，所以操作快速，而查找费时。
  vector支持快速的查找，只需要找出下标即可，但是插入到vector中间费时。
  map的查找的时间复杂度为O(nlog2n),
