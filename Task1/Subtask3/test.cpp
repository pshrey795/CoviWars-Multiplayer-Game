//Designed by:
// 1) Rahul Chhabra (2019CS11016)
// 2) Shrey Patel (2019CS10400)

#include<opencv2/opencv.hpp>
#include<bits/stdc++.h>
#include<fstream>

using namespace std;
using namespace cv;

//Helper Function to calculate the proportion of black color on screen, this helps us to calculate
//the queue density and the dynamic density 
double black_density(Mat mat)
{      
	double k=0.0;

    	for(int i=0; i<mat.size().height; i++)
    	{
        	for(int j=0; j<mat.size().width; j++)
        	{
            		//Checking if the current pixel is black i.e. value = 0.0
            		if (mat.at<double>(i,j)==0.0){k=k+1.0;}
        	}
    	}
    	double area=(float)mat.size().height*mat.size().width;
    	
    	//k = Total black coloured area on screen, area = Total area of screen
    	return k/area;
}

//Helper function to check file format for valid videos
bool check_format(string video){
	int n= video.length();
	if(n<=4){
		return false;
	}else if(video.substr(n-4,4)==".mp4" || video.substr(n-4,4)==".wmv"){
		return true;
	}else if(n<=5){
		return false;
	}else if(video.substr(n-5,5)==".mpeg"){
		return true;
	}else{
		return false;
	}
}

int main(int argc,char** argv)
{
	//Checking number of arguments
	if(argc == 2){
		
		//Taking video input
		string inputVideo = string(argv[1]);
		VideoCapture cap(inputVideo);
		
		//Checking if the video file can be opened
		if (cap.isOpened() == false)  
 		{
  			cerr << "Cannot open the video file. Please provide a correct video file. Check if the specified path is correct." << endl;
  			cin.get(); 
  			return -1;
 		}
 		
 		//Checking if the input video is of the correct format
 		if(!check_format(string(argv[1]))){
 			cerr << "Incorrect video format. Accepted file formats: .mp4, .mpeg and .wmv"<<endl;
 		}
 		else{
 		
 			//The first frame of the video, which we have taken as the background/reference
 			//frame for calculating queue density.
 			Mat initialImg;
 			cap.read(initialImg);
 			Size img_size=initialImg.size();		//Resolution=1920*1080 
 			resize(initialImg,initialImg,Size(1.5*img_size.width,1.5*img_size.height));
			cvtColor(initialImg,initialImg,COLOR_BGR2GRAY);
 			
 			//Size of the cropped image which we are interested in
 			Size cropped_size=Size(900,1200);

			//Warping the frame to fit in the cropped frame whose size we defined above
 			vector<Point2f> pts_dst;
 			pts_dst.push_back(Point2f(1214,309));
			pts_dst.push_back(Point2f(43,1265));
			pts_dst.push_back(Point2f(2613,1519));							
			pts_dst.push_back(Point2f(2017,303));

			vector<Point2f> pts_dst2;
			pts_dst2.push_back(Point2f(0,0));
			pts_dst2.push_back(Point2f(0,cropped_size.height-1));
			pts_dst2.push_back(Point2f(cropped_size.width-1,cropped_size.height-1));
			pts_dst2.push_back(Point2f(cropped_size.width-1,0));

			Mat h = findHomography(pts_dst,pts_dst2);		
 			warpPerspective(initialImg,initialImg,h,cropped_size);

			//We store the recently processed frame in currentImg, for calculating dynamic
			//density. The initial value of currentImg is the first frame i.e. initialImg
			Mat currentImg = initialImg;
			
			//Current frame number
			int frameNo = 1;
			
			//Queue density and Dynamic density values for the last frame. Note that we 
			//don't calculate these values for the first frame, as we have taken the first 
			//frame as reference.
			float qDensity;
			float dDensity;
			int number_of_threads;
			int number_of_frames=cap.get(CAP_PROP_FRAME_COUNT);
			cout<<"Please Enter number of threads:";
			cin>>number_of_threads;
			int step=number_of_frames/number_of_threads;
			vector<thread> threads;
			auto startTime = chrono::high_resolution_clock::now();
			for (int i = 0; i < number_of_threads; i++) {
				cout<<(int)(frameNo>=i*step)<<" "<<(int)(frameNo<((i+1)*step))<<"\n";			
    			threads.push_back(std::thread([&]() {
    				for(int j=0;j<10;j++){
    					cout<<j<<"\n";
    				}
      			
    			}));
  			}

			for (std::thread &t : threads) {
			    if (t.joinable()) {
			    	t.join();
			    }
			}
			
						
	}


}
	else{
		cerr<<"Exactly two arguments are acceptable. The correct input format on the command line should be ./video sample_video.mp4"<<endl;
	}
	return 0;	
}