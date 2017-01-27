An Arduino controlled RC car with L298N. [Youtube video](https://www.youtube.com/watch?v=ySksmX-fhQY)

## Parts
Arduino I bought from Amazon. All the other parts were from Ebay.  
* Chasis
* [L298N]
* [Arduino]
* [two 18650 batteries], 18650 battery box
* SR04 with holder
* 10cm female to male wires. Also used a few wires from Arduino starter package. 
* Servo SG90
* An on/off switch 


## Todo 
Hardware (add step by step)
* Use blue tooth chip to send data to computer python to matplot. this is easy for debugging. 
* A camera module to detect curve on the ground.
* A lidar sensor 

* Let the car follow lane
* Let the car can bypass another car, avoid collison, route plannnig. 


Lane detection including center
[youtube some student](https://www.youtube.com/watch?v=VlH3OEhZnow)

https://www.youtube.com/watch?v=8h9vU1pnNZA

https://www.youtube.com/watch?v=JMCNBfxLwJY

https://www.youtube.com/watch?v=SFqAAseL_1g



[laser and camera fusion](https://www.youtube.com/watch?v=g2mLq4yrySM)


##Paper

https://arxiv.org/pdf/1501.03124.pdf

[talking about some error metric](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=0ahUKEwj77-WHguHRAhUiS2MKHYqgC8E4ChAWCCAwAQ&url=http%3A%2F%2Fwww.atlantis-press.com%2Fphp%2Fdownload_paper.php%3Fid%3D25837416&usg=AFQjCNGtBAdllIuPK8DR2b3Mz68_j8lKdg&bvm=bv.145063293,d.cGc)

##code

http://www.transistor.io/revisiting-lane-detection-using-opencv.html

https://github.com/kylesf/Advanced-Lane-Detection

https://nakkaya.com/2011/01/24/lane-detection-using-clojure-and-opencv/

[uisng a single HoughLines function from Opencv](https://github.com/Eric-Gonzalez/lane-detection)

https://github.com/georgesung/road_lane_line_detection

[seems from Udacity assignment](https://github.com/automet/self-driving-car-lane-detection). Maybe you should take this degree. 

[collecting points on lane marks, and then perform regression for predictoin](https://github.com/DavidAwad/Lane-Detection)

[Udacity self-driving car curriculum](https://medium.com/self-driving-cars/term-1-in-depth-on-udacitys-self-driving-car-curriculum-ffcf46af0c08#.82dgwyqrx)

## Deep Learning for lane detection
detecting lanes seems a good problem. Can you do that using deep learning or deep reinforcement learning?

[ford](http://www.cv-foundation.org/openaccess/content_cvpr_2016_workshops/w3/papers/Gurghian_DeepLanes_End-To-End_Lane_CVPR_2016_paper.pdf)

[stanford](http://cs229.stanford.edu/proj2013/PazhayampallilKuan-DeepLearningLaneDetectionAutonomousVehicleLocalization.pdf)

[empirical comparisons](https://pdfs.semanticscholar.org/93fb/528c7f6db623322a8c03a0f639329549b6ea.pdf)

[markings](http://web2-clone.research.att.com/export/sites/att_labs/techdocs/TD_100768.pdf)

[some's blog taking Udacity course](http://deborah-digges.github.io/)
