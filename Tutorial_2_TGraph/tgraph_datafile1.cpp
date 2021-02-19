// Program to plot datapoints directly using TGraph with first two columns
// source: www.techforcurious.website
// Command to run: 
// root -l tgraph_datafile1.cpp

void tgraph_datafile1() {
  TGraph* gr = new TGraph("data2.txt");		// declaring TGraph pointer using data file name with first two columns
  gr->Draw();					// plotting graph on canvas
}
