// Program to plot datapoints directly using TGraph with first and third columns as well as delimiter ","
// source: www.techforcurious.website
// Command to run: 
// root -l tgraph_datafile4.cpp

void tgraph_datafile4() {
  TGraph* gr = new TGraph("data3delimit.txt","%lg %*lg %lg",",");// declaring TGraph pointer with first and third columns as well as delimiter ","
  gr->Draw();					// plotting graph on canvas
}
