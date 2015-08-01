void PlotCME() {

    const int opt = 1;
    const int reverseAxis=1;
    const float xScale = 80.;
    const int Ncen = 9;
    float cent[9] = {75,65,55,45,35,25,15,7.5,2.5};
    if(reverseAxis==1) for(int i=0;i<9;i++) cent[i] = xScale-cent[i];

    // pi-pi gamma minbias5
    float pipi_ss_mb5[2] = {-0.000517511, -0.000498905}; 
    float pipi_ss_err_mb5[2] = {0.000109435, 4.00826e-05};
    float pipi_os_mb5[2] = {0.00145929, 0.00047689}; 
    float pipi_os_err_mb5[2] = {-0.000107821, 3.97803e-05}; 
    float pipi_diff_mb5[2];
    float pipi_diff_err_mb5[2];
    for(int i = 0; i < 2; i++){
        pipi_diff_mb5[i] = pipi_os_mb5[i] - pipi_ss_mb5[i];
        pipi_diff_err_mb5[i] = sqrt(pipi_ss_err_mb5[i]*pipi_ss_err_mb5[i] + pipi_os_err_mb5[i]*pipi_os_err_mb5[i]);
    }

    // p-pi gamma
    float ppi_ss_mb5[9] = {-0.000759183,-0.000698569,-0.000639026,-0.00045583,-0.000325699};
    float ppi_ss_err_mb5[9] = {0.000396365,0.000127664,5.23149e-05,2.5814e-05,1.60185e-05};
    float ppi_os_mb5[9] = {0.00132191,-7.50028e-05,-0.000294025,-0.000198669,-0.000222652};
    float ppi_os_err_mb5[9] = {0.000392859,0.000127036,5.21607e-05,2.57607e-05,1.59926e-05};
    float ppi_diff_mb5[5];
    float ppi_diff_err_mb5[5];
    for(int i = 0; i < 5; i++){
        ppi_diff_mb5[i] = ppi_os_mb5[i] - ppi_ss_mb5[i];
        ppi_diff_err_mb5[i] = sqrt(ppi_ss_err_mb5[i]*ppi_ss_err_mb5[i] + ppi_os_err_mb5[i]*ppi_os_err_mb5[i]);
    }

    // h-h gamma difference
    float hh_ss_mb5[7] = {-3.50407e-05,-0.00028374,-0.000292137,-0.000219671,-0.000149272,-0.000100274,-4.21593e-05};
    float hh_ss_err_mb5[7] = {5.89852e-05,1.93076e-05,7.90994e-06,3.86078e-06,2.21097e-06,1.46188e-06,3.43009e-06};
    float hh_os_mb5[7] = {0.000755854,0.000334082,9.79002e-05,3.03262e-05,9.23874e-06,-1.59309e-05,-1.22256e-05};
    float hh_os_err_mb5[7] = {5.82219e-05,1.91773e-05,7.87994e-06,3.85199e-06,2.20776e-06,1.46049e-06,3.42793e-06};
    float hh_diff_mb5[7];
    float hh_diff_err_mb5[7];
    for(int i = 0; i < 7; i++){
        hh_diff_mb5[i] = hh_os_mb5[i] - hh_ss_mb5[i];
        hh_diff_err_mb5[i] = sqrt(hh_ss_err_mb5[i]*hh_ss_err_mb5[i] + hh_os_err_mb5[i]*hh_os_err_mb5[i]);
    }
    //float hh_diff_mb5[9] = {0.000790895,0.000617822,0.000390037,0.000249998,0.000158511};
    //float hh_diff_err_mb5[9] = {8.28797e-05,2.72131e-05,1.11652e-05,5.45376e-06,3.12451e-06};

    //p-p gamma
    float sb_mb5[9] = {-0.0587072,-0.0208132,-0.0085055,-0.00359319,-0.00202231,-0.00140762,-0.000752025,-0.000514945,-0.00063452};
    float sb_mb5_err[9] = {0.0027284,0.000824198,0.000327913,0.00016027,9.41312e-05,6.50143e-05,5.11943e-05,7.13937e-05,8.557e-05};
    float ob_mb5[9] = {0.0123332,0.00142273,-0.000980372,-0.000688074,-0.000824887,-0.000250303,-0.000276292,-0.000131987,7.41427e-05};
    float ob_mb5_err[9] = {0.0025161,0.000799182,0.000326187,0.000161574,9.56757e-05,6.64223e-05,5.25093e-05,7.34155e-05,8.8133e-05};

    float sb_mb6[9] = {-0.0527514,-0.0204757,-0.0080873,-0.00360157,-0.00199943,0,0,0,0};
    float sb_mb6_err[9] = {0.00309735,0.000929795,0.0003677,0.000179475,0.000105308,10,10,10,10};
    float ob_mb6[9] = {0.0125829,0.00190973,-0.00156551,-0.00105779,-0.000552374,0,0,0,0};
    float ob_mb6_err[9] = {0.00285275,0.000901649,0.000365659,0.000181054,0.000107092,10,10,10,10};

    //p-p and pbar-pbar separately
    float pp_mb5[9] = {-0.0616813,-0.0203313,-0.00866448,-0.00337588,-0.00208114,-0.00149112,-0.000734633,-0.000452311,-0.000601148};
    float pp_mb5_err[9] = {0.0033787,0.0010209,0.000405536,0.00019774,0.000115772,7.97223e-05,6.25924e-05,8.70917e-05,0.00010422};
    float nn_mb5[9] = {-0.0531294,-0.0217155,-0.00820496,-0.00400995,-0.00190741,-0.00124153,-0.000787255,-0.000643638,-0.000703849};
    float nn_mb5_err[9] = {0.00462574,0.0013967,0.000557321,0.000273627,0.000161693,0.000112337,8.89776e-05,0.000124658,0.000149898};

    float pp_mb6[9] = {-0.0503632,-0.0212313,-0.00746876,-0.00342347,-0.00195712,0,0,0,0};
    float pp_mb6_err[9] = {0.00383289,0.00115044,0.000454042,0.000221102,0.000129355,10,10,10,10};
    float nn_mb6[9] = {-0.0572561,-0.0190504,-0.00926754,-0.00394622,-0.00208272,0,0,0,0};
    float nn_mb6_err[9] = {0.00525823,0.00157888,0.000626773,0.000307302,0.000181336,10,10,10,10};

    //Combine period5 and period6
    float sb_comb[9] = {-0.056105, -0.0206647, -0.00832024, -0.00359691, -0.00201215, -0.00140762, -0.000752025, -0.000514945, -0.00063452};
    float sb_comb_err[9] = {0.00204735, 0.000616766, 0.000244732, 0.000119543, 7.01808e-05, 6.50143e-05, 5.11943e-05, 7.13937e-05, 8.557e-05};
    float ob_comb[9] = {0.0124425, 0.001637, -0.00123967, -0.00085198, -0.000703925, -0.000250303, -0.000276292, -0.000131987, 7.41427e-05};
    float ob_comb_err[9] = {0.00188701, 0.000598068, 0.000243412, 0.000120551, 7.1349e-05, 6.64223e-05, 5.25093e-05, 7.34155e-05, 8.8133e-05};

    //delta correlator
    float d_sb_mb5[9] = {-0.0350235,-0.022315,-0.0149182,-0.0101307,-0.00707675,-0.00470625,-0.00353503,-0.00246528,-0.0017746};
    float d_sb_mb5_err[9] = {0.000632097,0.000286966,0.000152612,8.94129e-05,5.68699e-05,3.89655e-05,2.71056e-05,2.97733e-05,2.60951e-05};
    float d_ob_mb5[9] = {0.0106915,0.00537222,0.00349689,0.0022509,0.00151172,0.000876587,0.000690835,0.000629657,0.000855912};
    float d_ob_mb5_err[9] = {0.00058221,0.000278292,0.000151861,9.01714e-05,5.78173e-05,3.9822e-05,2.78098e-05,3.06249e-05,2.68832e-05};

    float d_sb_mb6[9] = {-0.0344276,-0.0222992,-0.0145245,-0.00999623,-0.00711713,0,0,0,0};
    float d_sb_mb6_err[9] = {0.000497121,0.000225529,0.00011966,6.96761e-05,4.39169e-05,10,10,10,10};
    float d_ob_mb6[9] = {0.0107854,0.00583289,0.00282712,0.00226743,0.00141517,0,0,0,0};
    float d_ob_mb6_err[9] = {0.000456751,0.000218706,0.000119017,7.03091e-05,4.46746e-05,10,10,10,10};

    //p-Lambda
    float SAM[9] = {-0.0163999,-0.00775996 ,-0.00288082 ,-0.00120973 ,-0.00100498 ,-0.00042842 ,-0.000154343,-3.97134e-05,-0.000196183};
    float SAM_err[9] = {0.00451681 ,0.00132629 ,0.000503235,0.000231254,0.000131746,8.89346e-05,7.16359e-05,0.000101968,0.000110012};
    float PN[9] = {0.0101196   ,-0.000926227,-0.00104920,-0.000218136,-0.000540505,-0.00014437 ,-0.000188603,-0.000229053,-0.00050383};
    float PN_err[9] = {0.00420114 , 0.00128477, .0004983,0.000231499, 0.000132784, 9.0028e-05 ,7.27423e-05, 0.000103739, 0.000112018};


    float mb5[9], mb5_err[9], mb6[9], mb6_err[9], sum[9] = {0,}, sum_err[9] = {0,}, ob_sum[9] = {0,}, ob_sum_err[9] = {0,}, diff_sum[9] = {0,}, diff_sum_err[9] = {0,};
    for(int i=0;i<9;i++) {
	mb5[i] = sb_mb5[i];
	mb5_err[i] = sb_mb5_err[i];
	mb6[i] = sb_mb6[i];
	mb6_err[i] = sb_mb6_err[i];

	sum[i] = mb5[i]/mb5_err[i]/mb5_err[i] + mb6[i]/mb6_err[i]/mb6_err[i];
	sum_err[i] = 1/mb5_err[i]/mb5_err[i] + 1/mb6_err[i]/mb6_err[i];
	sum[i] /= sum_err[i];
	sum_err[i] = 1/sqrt(sum_err[i]);

        ob_sum[i] = ob_mb5[i]/ob_mb5_err[i]/ob_mb5_err[i] + ob_mb6[i]/ob_mb6_err[i]/ob_mb6_err[i];
        ob_sum_err[i] = 1/ob_mb5_err[i]/ob_mb5_err[i] + 1/ob_mb6_err[i]/ob_mb6_err[i];
        ob_sum[i] /= ob_sum_err[i];
        ob_sum_err[i] = 1/sqrt(ob_sum_err[i]);

        diff_sum[i] = ob_sum[i] - sum[i];
        diff_sum_err[i] = sqrt(ob_sum_err[i]*ob_sum_err[i] + sum_err[i]*sum_err[i]);
    }
    for(int i=0;i<9;i++) cout<<sum[i]<<", ";cout<<endl;
    for(int i=0;i<9;i++) cout<<sum_err[i]<<", ";cout<<endl;
    for(int i = 0; i < 9; i++) cout<<ob_sum[i]<<", "; cout<<endl;
    for(int i = 0; i < 9; i++) cout<<ob_sum_err[i]<<", "; cout<<endl;
    for(int i = 0; i < 9; i++) cout<<diff_sum[i]<<", "; cout<<endl;
    for(int i = 0; i < 9; i++) cout<<diff_sum_err[i]<<", "; cout<<endl;

    gStyle->SetOptStat(0);
    gStyle->SetOptDate(0);
    gStyle->SetOptFit(0);

    // make the graph page
    int canvasWidth = 700, canvasHeight = 500;             // landscape
    TCanvas* can = new TCanvas("Flow_v", "",canvasWidth, canvasHeight);
    gPad->SetGridx(0);
    gPad->SetGridy(0);
    gPad->SetFillColor(0);
    gPad->SetLeftMargin(0.17);
    gPad->SetRightMargin(0.04);
    gPad->SetTopMargin(0.02);
    gPad->SetBottomMargin(0.15);

    // make a histogram
    TString* histGraphName = new TString("gamma");
    TH1F* histGraph = new TH1F(histGraphName->Data(), "", 24, 0, 80);
    histGraph->SetMaximum(0.002);
    histGraph->SetMinimum(-0.001);
    histGraph->SetLineColor(kBlack);
    histGraph->SetXTitle("% Most Central");
    histGraph->SetYTitle("#LT cos(#phi_{1} + #phi_{2} - 2 #psi_{TPC}) #GT");
    histGraph->GetYaxis()->SetTitleOffset(1.3);
    histGraph->GetYaxis()->SetTitleSize(0.055);
    histGraph->GetXaxis()->SetTitleSize(0.055);
    histGraph->GetXaxis()->SetTitleOffset(1.);
    histGraph->GetXaxis()->SetNdivisions(505);
    if (reverseAxis==1){
	double lsize=histGraph->GetLabelSize();
	histGraph->SetLabelSize(0.,"X");
    }
    histGraph->Draw();

    if (reverseAxis==1){
	double ymin=-0.063;
	TF1 *f1=new TF1("f1","80.-x",0.,80);
	TGaxis *A1=new TGaxis(0.,ymin,xScale,ymin,"f1",510,"+");
	A1->SetLabelSize(lsize);
	A1->SetLineColor(1);
	A1->Draw();

  }
/*
  TGraphErrors* parity_ss_L_line = new TGraphErrors(9,cent,SAM,0,SAM_err);
  parity_ss_L_line->SetMarkerSize(0);
  parity_ss_L_line->SetLineStyle(4);
  parity_ss_L_line->SetLineColor(2);
  parity_ss_L_line->Draw("peC");

  TGraphErrors* parity_ss_L = new TGraphErrors(9,cent,SAM,0,SAM_err);
  parity_ss_L->SetMarkerStyle(29);
  parity_ss_L->SetMarkerSize(1.5);
  parity_ss_L->SetMarkerColor(2);
  parity_ss_L->SetLineColor(2);
  parity_ss_L->Draw("pe");

  TGraphErrors* parity_os_L_line = new TGraphErrors(9,cent,PN,0,PN_err);
  parity_os_L_line->SetMarkerSize(0);
  parity_os_L_line->SetLineStyle(4);
  parity_os_L_line->SetLineColor(4);
  parity_os_L_line->Draw("peC");

  TGraphErrors* parity_os_L = new TGraphErrors(9,cent,PN,0,PN_err);
  parity_os_L->SetMarkerStyle(29);
  parity_os_L->SetMarkerSize(1.5);
  parity_os_L->SetMarkerColor(4);
  parity_os_L->SetLineColor(4);
  parity_os_L->Draw("pe");
*/
    TGraphErrors* gr_hh_ss_mb5 = new TGraphErrors(7, cent, hh_ss_mb5, 0, hh_ss_err_mb5);
    gr_hh_ss_mb5->SetMarkerStyle(27);
    gr_hh_ss_mb5->SetMarkerSize(1.5);
    gr_hh_ss_mb5->SetMarkerColor(2);
    gr_hh_ss_mb5->SetLineColor(2);
    gr_hh_ss_mb5->Draw("peC");

    TGraphErrors* gr_hh_os_mb5 = new TGraphErrors(7, cent, hh_os_mb5, 0, hh_os_err_mb5);
    gr_hh_os_mb5->SetMarkerStyle(27);
    gr_hh_os_mb5->SetMarkerSize(1.5);
    gr_hh_os_mb5->SetMarkerColor(4);
    gr_hh_os_mb5->SetLineColor(4);
    gr_hh_os_mb5->Draw("peC");

    TGraphErrors* gr_pipi_ss_mb5 = new TGraphErrors(2, cent, pipi_ss_mb5, 0, pipi_ss_err_mb5);
    gr_pipi_ss_mb5->SetMarkerStyle(28);
    gr_pipi_ss_mb5->SetMarkerSize(1.5);
    gr_pipi_ss_mb5->SetMarkerColor(2);
    gr_pipi_ss_mb5->SetLineColor(2);
    gr_pipi_ss_mb5->Draw("peC");

    TGraphErrors* gr_pipi_os_mb5 = new TGraphErrors(2, cent, pipi_os_mb5, 0, pipi_os_err_mb5);
    gr_pipi_os_mb5->SetMarkerStyle(28);
    gr_pipi_os_mb5->SetMarkerSize(1.5);
    gr_pipi_os_mb5->SetMarkerColor(4);
    gr_pipi_os_mb5->SetLineColor(4);
    gr_pipi_os_mb5->Draw("peC");

    TGraphErrors* gr_ppi_ss_mb5 = new TGraphErrors(5, cent, ppi_ss_mb5, 0, ppi_ss_err_mb5);
    gr_ppi_ss_mb5->SetMarkerStyle(29);
    gr_ppi_ss_mb5->SetMarkerSize(1.5);
    gr_ppi_ss_mb5->SetMarkerColor(2);
    gr_ppi_ss_mb5->SetLineColor(2);
    gr_ppi_ss_mb5->Draw("peC");

    TGraphErrors* gr_ppi_os_mb5 = new TGraphErrors(5, cent, ppi_os_mb5, 0, ppi_os_err_mb5);
    gr_ppi_os_mb5->SetMarkerStyle(29);
    gr_ppi_os_mb5->SetMarkerSize(1.5);
    gr_ppi_os_mb5->SetMarkerColor(4);
    gr_ppi_os_mb5->SetLineColor(4);
    gr_ppi_os_mb5->Draw("peC");


/*
        for(int i=0;i<5;i++) {
                TBox *box = new TBox(cent[i]-.7,PN[i],cent[i]+.7,OS_noHBT[i]);
                box->SetFillColor(kBlue-10);
                box->SetFillStyle(1000);
                box->SetLineColor(kBlue-10);
                box->SetLineWidth(1);
                box->SetLineStyle(1);
                box->Draw("same");
                TBox *box = new TBox(cent[i]-.7,SAM[i],cent[i]+.7,SS_noHBT[i]);
                box->SetFillColor(kRed-10);
                box->SetFillStyle(1000);
                box->SetLineColor(kRed-10);
                box->SetLineWidth(1);
                box->SetLineStyle(1);
                box->Draw("same");
        }
*/

    TLegend* legend = new TLegend(0.50, 0.20, 0.80, 0.40);
    legend->SetFillColor(0);
    legend->SetTextSize(0.07);
    legend->SetLineColor(0);
    legend->SetBorderSize(0.000001);
    //legend->AddEntry(parity_sb_mb5,"period 5","pl");
    //legend->AddEntry(parity_sb_mb6,"period 6","p");
    //legend->Draw();

    TLatex *   tex = new TLatex(35,-0.035,"200 GeV Au+Au");
    tex->SetTextSize(0.06);
    tex->SetTextColor(1);
    //tex->Draw();

    TLatex *   tex = new TLatex(35,-0.011,"p-p and #bar{p}-#bar{p}");
    tex->SetTextSize(0.06);
    tex->SetTextColor(2);
    //tex->Draw();

    TLatex *   tex = new TLatex(35,0.005,"p-#bar{p}");
    tex->SetTextSize(0.06);
    tex->SetTextColor(4);
    //tex->Draw();

    TLatex *   tex = new TLatex(80.5,.0004,"STAR preliminary");
    tex->SetTextSize(0.045);
    tex->SetTextColor(1);
    tex->SetTextAngle(270);
    //   tex->Draw();

    // Make the difference plot
    int canvasWidth = 700, canvasHeight = 500;             // landscape
    TCanvas* can_diff = new TCanvas("Flow_diff", "",canvasWidth, canvasHeight);
    gPad->SetGridx(0);
    gPad->SetGridy(0);
    gPad->SetFillColor(0);
    gPad->SetLeftMargin(0.17);
    gPad->SetRightMargin(0.04);
    gPad->SetTopMargin(0.02);
    gPad->SetBottomMargin(0.15);

    TString* histGraphName_diff = new TString("diff_gamma");
    TH1F* histGraph_diff = new TH1F(histGraphName_diff->Data(), "", 24, 0, 80);
    histGraph_diff->SetMaximum(0.0023);
    histGraph_diff->SetMinimum(-0.001);
    histGraph_diff->SetLineColor(kBlack);
    histGraph_diff->SetXTitle("% Most Central");
    histGraph_diff->SetYTitle("#LT cos(#phi_{1} + #phi_{2} - 2 #psi_{TPC}) #GT_{os-ss}");
    histGraph_diff->GetYaxis()->SetTitleOffset(1.3);
    histGraph_diff->GetYaxis()->SetTitleSize(0.055);
    histGraph_diff->GetXaxis()->SetTitleSize(0.055);
    histGraph_diff->GetXaxis()->SetTitleOffset(1.);
    histGraph_diff->GetXaxis()->SetNdivisions(505);
    if (reverseAxis==1){
	double lsize=histGraph_diff->GetLabelSize();
	histGraph_diff->SetLabelSize(0.,"X");
    }
    histGraph_diff->Draw();

    if (reverseAxis==1){
	double ymin_diff=-0.01;
	//TF1 *f1=new TF1("f1","80.-x",0.,80);
	TGaxis *A1_diff=new TGaxis(0.,ymin_diff,xScale,ymin_diff,"f1",510,"+");
	A1_diff->SetLabelSize(lsize);
	A1_diff->SetLineColor(1);
	A1_diff->Draw();
    }

    //TGraphErrors* graph_diff = new TGraphErrors(9, cent, diff_sum, 0, diff_sum_err); 
    //graph_diff->SetMarkerStyle(4);
    //graph_diff->SetMarkerColor(2);
    //graph_diff->SetLineColor(2);
    //graph_diff->Draw("peC");

    TGraphErrors* gr_pipi_diff = new TGraphErrors(2, cent, pipi_diff_mb5, 0, pipi_diff_err_mb5); 
    gr_pipi_diff->SetMarkerStyle(4);
    gr_pipi_diff->SetMarkerColor(1);
    gr_pipi_diff->SetLineColor(1);
    gr_pipi_diff->Draw("peC");

    TGraphErrors* gr_hh_diff = new TGraphErrors(7, cent, hh_diff_mb5, 0, hh_diff_err_mb5); 
    gr_hh_diff->SetMarkerStyle(4);
    gr_hh_diff->SetMarkerColor(2);
    gr_hh_diff->SetLineColor(2);
    gr_hh_diff->Draw("peC");

    TGraphErrors* gr_ppi_diff = new TGraphErrors(5, cent, ppi_diff_mb5, 0, ppi_diff_err_mb5); 
    gr_ppi_diff->SetMarkerStyle(4);
    gr_ppi_diff->SetMarkerColor(4);
    gr_ppi_diff->SetLineColor(4);
    gr_ppi_diff->Draw("peC");

    TLegend* leg_diff = new TLegend(0.6, 0.6, 0.8, 0.8);
    leg_diff->SetFillColor(0);
    leg_diff->SetTextSize(0.07);
    leg_diff->SetLineColor(0);
    leg_diff->SetBorderSize(0.000001);
    //leg_diff->AddEntry(graph_diff,"p #bar{p} - p p and #bar{p} #bar{p}","pl");
    leg_diff->AddEntry(gr_pipi_diff, "#pi^{#pm}#pi^{#pm}", "pl");
    leg_diff->AddEntry(gr_hh_diff, "h^{#pm}h^{#pm}", "pl");
    leg_diff->AddEntry(gr_ppi_diff, "p#pi^{#pm}", "pl");
    leg_diff->Draw();
}
