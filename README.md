# YMM
运满满代码分析

运满满司机端

0.OC写的

1.使用到了YYKit

2.网络库 AFN

3.导航用的是高德

4.日志工具 DDLOG

5.网页-UIWebView+WKWebview都有

6.即时通讯用--是环信

7.数据库存储 FMDB

8.集成了阿里支付，微信支付，易宝支付

9.有不少的cell也是用的xib进行布局的

10.采用的是比较传统的mvc模式，controller看上去特逼得臃肿，没有合理规划controller（HCBRegionCollectionViewController）

11.他们的网络库维护了队列，缓存，弹框逻辑，支持控制请求的一系列操作

直接基于AFN进行的封装，看上去没有好好封装，功能都堆在一起了，没有合理进行功能拆分

12.首页是用的MVVM，没有用上RAC

13.二维码的识别也是用的QRCode

14.使用了科大讯飞

15.解析数据使用的是jsonmodel

16.人脸识别也是用的face++的

17.下拉刷新用的MJRefresh

18.上传图片是保存在阿里云上面 OSSClient
