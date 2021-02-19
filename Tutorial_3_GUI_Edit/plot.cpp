// Program to plot datapoints directly using TGraph with first and third columns
// source: www.techforcurious.website
// Command to run: 
// root -l plot.cpp
void plot() {
  TGraph* gr = new TGraph("data.txt","%lg %*lg %lg");
  gr->Draw();
}
