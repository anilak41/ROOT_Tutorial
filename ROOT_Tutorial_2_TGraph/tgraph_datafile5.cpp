// Program to plot datapoints directly using TGraph with first and third columns as well as delimiter "," and ";"
// source: www.techforcurious.website
// Command to run: 
// root -l tgraph_datafile5.cpp

void tgraph_datafile5() {
  TGraph* gr = new TGraph("data3delimit1.txt","%lg %*lg %lg",",;"); //declaring TGraph pointer with first and third columns as well as delimiter "," and ";"
  gr->Draw();					// plotting graph on canvas
}
