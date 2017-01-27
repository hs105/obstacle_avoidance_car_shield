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

##code

http://www.transistor.io/revisiting-lane-detection-using-opencv.html

##Paper

https://arxiv.org/pdf/1501.03124.pdf

[talking about some error metric](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=0ahUKEwj77-WHguHRAhUiS2MKHYqgC8E4ChAWCCAwAQ&url=http%3A%2F%2Fwww.atlantis-press.com%2Fphp%2Fdownload_paper.php%3Fid%3D25837416&usg=AFQjCNGtBAdllIuPK8DR2b3Mz68_j8lKdg&bvm=bv.145063293,d.cGc)

https://github.com/kylesf/Advanced-Lane-Detection

https://nakkaya.com/2011/01/24/lane-detection-using-clojure-and-opencv/

[uisng a single HoughLines function from Opencv](https://github.com/Eric-Gonzalez/lane-detection)

https://github.com/georgesung/road_lane_line_detection

[collecting points on lane marks, and then perform regression for predictoin](https://github.com/DavidAwad/Lane-Detection)
