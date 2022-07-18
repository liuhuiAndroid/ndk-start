# ffmpeg-study
[雷霄骅 CSDN](https://blog.csdn.net/leixiaohua1020/article/details/15811977)
##### brew 安装 ffmpeg安装

```shell
	brew search ffmpeg
	brew update
	brew install ffmpeg
	ffmpeg -version
```

##### 源码安装 ffmpeg安装
```shell
	// 下载ffmpeg:http://ffmpeg.org/download.html
	git clone https://git.ffmpeg.org/ffmpeg.git ffmpeg
	// 编译安装ffmpeg
	./configure --prefix=/usr/local/ffmpeg --enable-debug=3
	make -j 4
	make install
	// 配置环境变量
	vi ~/.bash_profile
	source ~/.bash_profile
```

##### ffmpeg采集视频
```shell
	// 参考：https://www.cnblogs.com/vczf/p/13450998.html
	// 使用多媒体文件生成YUV
	ffmpeg -i china.mp4 -an -c:v rawvideo -pix_fmt yuv420p out.yuv
	// 播放YUV
	ffplay -pixel_format yuv420p -video_size 960x540 out.yuv
	// 播放Y分量
	ffplay -pixel_format yuv420p -video_size 960x540 -vf extractplanes='y' out.yuv
	// 提取各分量
	ffmpeg -i girl.mp4 -filter_complex 'extractplanes=y+u+v[y][u][v]' -map '[y]' y.yuv -map '[u]' u.yuv -map '[v]' v.yuv
	// 播放Y分量
	ffplay -pixel_format yuv420p -video_size 1920x1080 -pixel_format gray y.yuv
	// 播放
	ffplay -pixel_format yuv420p -video_size 960x540 -pixel_format gray u.yuv
	// 采集视频
	
```

##### H264编码原理


##### ffmpeg常用命令
```shell
	// 录屏
	ffmpeg -f avfoundation -i 1 -r 30 out.yuv
	// 播放录屏 测试失败 
	ffplay -s 2880x1800 -pix_fmt uyvy422 out.yuv
	// 查看 avfoundation 支持视频设备和音频设备
	ffmpeg -f avfoundation -list_devices true -i ""
	// 录音
	ffmpeg -f avfoundation -i :0 out.wav
	// 播放音频
	ffplay out.wav
	// 录视频
	ffmpeg -framerate 30 -f avfoundation -i 0 out.mp4
	// 播放视频
	ffplay -s 640x480 -pix_fmt uyvy422 out.mp4
	
	ffplay 韵动中国.mp4
	// 多媒体格式转换
	ffmpeg -i china.mp4 -vcodec copy -acodec copy china.flv
	// 抽取视频流
	ffmpeg -i china.mp4 -vcodec copy -an out.h264
	// 提取pcm数据
	ffmpeg -i china.mp4 -vn -ar 44100 -ac 2 -f s16le out.pcm
	ffmpeg -ar 44100 -ac 2 -f s16le out.pcm
	
	// 视频裁剪
	ffmpeg -i china.mp4 -ss 00:10:00 -t 10 1.ts
	// 视频转图片
	ffmpeg -i china.mp4 -r 1 -f image2 image-%3d.jpeg
```


##### 学习路径
f1-1 f1-2 f1-3 f1-4 
f2-1 f2-2 f2-3 f2-4
c++学习
f1-9 f1-10 

##### C++
来源：[# 重学C++ ，重构你的C++知识体系](https://coding.imooc.com/class/414.html)，预计7.15前看完
CLion激活码：https://33tool.com/idea/


