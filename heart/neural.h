/*
Thanks to the brilliant Prof. Michael Black for introducing me to the wide world of neural networks,
perceptrons, and machine learning.
*/

//the learning rate alpha
const float alpha = 0.05;
//the magnitude of the initial weight values range uniformly from -noisemax/2 to noisemax/2
const float noisemax = 0.4;

//define a Perceptron object
//Perceptron* neuralnet = new Perceptron(3); makes a neural net with 3 inputs and 3 hidden nodes
class Perceptron
{
public:
	//neuralnet->getPrediction(inputs) takes an array of integer inputs and produces a binary guess
	int getPrediction(int*);
	//neuralnet->getRawPrediction(inputs) does the same, but produces a floating point guess
	float getRawPrediction(int*);
	//neuralnet->train(inputs, desiredoutput) teaches the neural net to give the desiredoutput when those inputs are seen
	bool train(int*, int);
	//constructor
	Perceptron(int);
	//array of size+1 output layer weights
	float* outputweight;
	//2D array: an array of size+1 hidden layer weights for each of size hidden nodes
	float** hiddenweight;
	//the number of inputs and hidden nodes
	int size;
};
