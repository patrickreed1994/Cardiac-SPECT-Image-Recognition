# Cardiac-SPECT-Image-Recognition
A diagnostic tool using neural networks to read cardiac Single Proton Emission Computed Tomography (SPECT) images for abnormalities. 
It relies on perceptron networks to decipher 22 different feature patterns in SPECT images. 
The project was written in my free time to practice my comfort with machine learning algorithms and neural networks concepts. 
Honestly, my algorithm can detect abnormalities with about 62-65% accuracy, but it's a starting point for making better diagnostic algorithms in the future.


Written in C++. Credit for the dataset and test files belongs to the University of Irvine Machine Learning Repository. Data available here: https://archive.ics.uci.edu/ml/datasets/SPECT+Heart. Credit for my inspiration and knowledge goes to Prof. Michael Black.

# Compiling the Project
Navigate to the project out of your command line. Run:
> make heart

# Training the Project
To run the project, you have to run the train command to run the training file through the algorithm to update the perceptron weights. Run:
>./heart train

# Testing the Project
The project will run through a test file of SPECT images and generate the likelihood that the image shows abnormalities. 
The result will print predictions for normality for each test case and then produce a decimal figure representing the algorithm's diagnostic accuracy
>./heart test

