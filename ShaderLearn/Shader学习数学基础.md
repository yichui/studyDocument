# Shader学习数学基础

标签（空格分隔）： 矢量、矩阵等

---
## 1.矢量 ##
A.矢量点乘
    公式1： ![此处输入图片的描述][1],
    公式2： ![此处输入图片的描述][2]
    其中一个几何意义是**投影**
    ![此处输入图片的描述][3]
    
B.矢量叉乘
    公式1：![此处输入图片的描述][4]
    公式2：![此处输入图片的描述][5]
    几何意义：叉乘的结果会**得到一个同时垂直于两个矢量的新矢量**
    ![此处输入图片的描述][6]
## 2.矩阵 ##
A.矩阵乘法
    矩阵乘法不满足交换律，满足结合律
B.特殊矩阵
    1.方块矩阵
        行数和列数相等的矩阵
    2.单位矩阵
        任何矩阵和单位矩阵相乘都是原来的矩阵
        ![此处输入图片的描述][7]
        ![此处输入图片的描述][8]
    3.转置矩阵
        公式1：![此处输入图片的描述][9]
        公式2：![此处输入图片的描述][10] 
    4.逆矩阵
        最重要的性质：M和它的逆矩阵相乘，是单位矩阵
        公式1：![此处输入图片的描述][11]
        公式2：![此处输入图片的描述][12]
        公式3：![此处输入图片的描述][13]
    5.正交矩阵
        性质：M和它的转置矩阵相乘为单位矩阵
        公式1：![此处输入图片的描述][14]
        公式2：![此处输入图片的描述][15]
        

## 3.矩阵变换 ##
 


  [1]: https://github.com/yichui/studyDocument/blob/master/learnPic/dianchenggongshi.png
  [2]: https://github.com/yichui/studyDocument/blob/master/learnPic/dianchenggongshi2.jpg
  [3]: http://static.zybuluo.com/candycat/rlo1hwsdb334yi9i9vimdtko/projection.png
  [4]: https://github.com/yichui/studyDocument/blob/master/learnPic/dianchenggongshi.png
  [5]: https://github.com/yichui/studyDocument/blob/master/learnPic/dianchenggongshi2.jpg
  [6]: http://static.zybuluo.com/candycat/0d3l6dqc7q6d3h6vxkqjqo99/vector_cross.png
  [7]: https://github.com/yichui/studyDocument/blob/master/learnPic/danweijuzhen1.png
  [8]: https://github.com/yichui/studyDocument/blob/master/learnPic/danweijuzhen2.png
  [9]: https://github.com/yichui/studyDocument/blob/master/learnPic/zhuanzhijuzhen1.png
  [10]: https://github.com/yichui/studyDocument/blob/master/learnPic/zhuanzhijuzhen2.png
  [11]: https://github.com/yichui/studyDocument/blob/master/learnPic/nijuzhen1.png
  [12]: https://github.com/yichui/studyDocument/blob/master/learnPic/nijuzhen3.png
  [13]: https://github.com/yichui/studyDocument/blob/master/learnPic/nijuzhen4.png
  [14]: https://github.com/yichui/studyDocument/blob/master/learnPic/zhengjiaojuzhen1.png
  [15]: https://github.com/yichui/studyDocument/blob/master/learnPic/zhengjiaojuzhen2.png
