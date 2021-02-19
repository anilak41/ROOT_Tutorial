// Program to plot datapoints directly using TGraph with first and third columns
// source: www.techforcurious.website
// Command to run: 
// root -l tgraph_datafile3.cpp

void tgraph_datafile3() {
  TGraph* gr = new TGraph("data3.txt", "%lg %*lg %lg");	// declaring TGraph pointer with first and third columns
  gr->Draw();					// plotting graph on canvas
}
