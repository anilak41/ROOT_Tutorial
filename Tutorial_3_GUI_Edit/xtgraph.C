void xtgraph()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Apr 26 13:13:17 2020) by ROOT version 6.14/00
   TCanvas *c1 = new TCanvas("c1", "c1",83,137,894,713);
   c1->Range(-1.25,-12.725,12.25,123.525);
   c1->SetFillColor(41);
   c1->SetBorderMode(0);
   c1->SetBorderSize(5);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameFillColor(30);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderSize(5);
   c1->SetFrameFillColor(30);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderSize(5);
   
   Double_t Graph0_fx1[10] = {
   0.9936887,
   1.993408,
   2.993128,
   3.992847,
   4.992567,
   5.992286,
   6.992006,
   7.991725,
   8.980942,
   9.991164};
   Double_t Graph0_fy1[10] = {
   1.101853,
   4.129631,
   9.175927,
   16.03889,
   25.12222,
   36.02222,
   49.14259,
   64.07963,
   81.15821,
   100.0093};
   TGraph *graph = new TGraph(10,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Distance Time Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   
   TH1F *Graph_Graph_Graph011 = new TH1F("Graph_Graph_Graph011","Distance Time Graph",100,0.1,10.9);
   Graph_Graph_Graph011->SetMinimum(0.9);
   Graph_Graph_Graph011->SetMaximum(109.9);
   Graph_Graph_Graph011->SetDirectory(0);
   Graph_Graph_Graph011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph011->SetLineColor(ci);
   Graph_Graph_Graph011->GetXaxis()->SetTitle("Time (s)");
   Graph_Graph_Graph011->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph011->GetXaxis()->SetAxisColor(2);
   Graph_Graph_Graph011->GetXaxis()->SetLabelColor(2);
   Graph_Graph_Graph011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph011->GetXaxis()->SetTitleOffset(0.69);
   Graph_Graph_Graph011->GetXaxis()->SetTitleColor(2);
   Graph_Graph_Graph011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph011->GetYaxis()->SetTitle("Distance (m)");
   Graph_Graph_Graph011->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph011->GetYaxis()->SetAxisColor(2);
   Graph_Graph_Graph011->GetYaxis()->SetLabelColor(2);
   Graph_Graph_Graph011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph011->GetYaxis()->SetTitleOffset(0.65);
   Graph_Graph_Graph011->GetYaxis()->SetTitleColor(2);
   Graph_Graph_Graph011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph011->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph011);
   
   graph->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3621076,0.9270073,0.7724215,0.9810219,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextColor(2);
   pt->SetTextFont(42);
   pt->SetTextSize(0.07320644);
   TText *pt_LaTex = pt->AddText("Distance Time Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
