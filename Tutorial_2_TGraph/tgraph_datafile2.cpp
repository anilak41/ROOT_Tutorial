// Program to plot datapoints directly using TGraph with first two columns out of 3 columns
// source: www.techforcurious.website
// Command to run: 
// root -l tgraph_datafile2.cpp

void tgraph_datafile2() {
  TGraph* gr = new TGraph("data3.txt");		// declaring TGraph pointer with first two columns out of 3 columns
  gr->Draw();					// plotting graph on canvas
}
