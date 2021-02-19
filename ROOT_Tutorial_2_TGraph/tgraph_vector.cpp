// Program to plot datapoints using vector in TGraph
// source: www.techforcurious.website
// Command to run: 
// root -l tgraph_vector.cpp

void tgraph_vector() {
  ifstream infile;			// input file handle
  infile.open("data2.txt");		// opening input data file 

  double x,y;				// variable for storing data points while reading
  vector <double> x_list, y_list;	// vectors for storing data points x and y

  while (infile>>x>>y) {		// reading data point in while loop
    x_list.push_back(x);		// adding data point x to vector
    y_list.push_back(y);		// adding data point y to vector
  }

  TGraph* gr = new TGraph(x_list.size(), &x_list[0], &y_list[0]);	// declaring TGraph pointer using vector
  gr->Draw();				// plotting graph on canvas
}
