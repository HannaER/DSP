#include "load_db.h" 

#define NaN	0 

void load_db(db_t* current_db){

	block_t b0, b1, b2, b3, b4, b5, b6, b7, b8, b9; 
	version_t version; 
	word_t word; 
	db_t db; 
	b0.reflect[0] = -0.688813;
	b0.reflect[1] = 0.478021;
	b0.reflect[2] = -0.428151;
	b0.reflect[3] = 0.209937;
	b0.reflect[4] = 0.059096;
	b0.reflect[5] = 0.272517;
	b0.reflect[6] = -0.029243;
	b0.reflect[7] = -0.224432;
	b0.reflect[8] = 0.089780;
	b0.reflect[9] = 0.222161;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.679783;
	b1.reflect[1] = 0.506557;
	b1.reflect[2] = -0.427296;
	b1.reflect[3] = 0.230371;
	b1.reflect[4] = 0.055142;
	b1.reflect[5] = 0.371064;
	b1.reflect[6] = 0.103472;
	b1.reflect[7] = -0.348692;
	b1.reflect[8] = 0.040865;
	b1.reflect[9] = 0.025389;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.471476;
	b2.reflect[1] = 0.004247;
	b2.reflect[2] = -0.431919;
	b2.reflect[3] = 0.482860;
	b2.reflect[4] = 0.097506;
	b2.reflect[5] = 0.412449;
	b2.reflect[6] = -0.102180;
	b2.reflect[7] = -0.006848;
	b2.reflect[8] = -0.060659;
	b2.reflect[9] = 0.017158;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.510894;
	b3.reflect[1] = 0.208046;
	b3.reflect[2] = -0.428282;
	b3.reflect[3] = 0.297384;
	b3.reflect[4] = 0.090559;
	b3.reflect[5] = 0.623319;
	b3.reflect[6] = -0.110126;
	b3.reflect[7] = -0.067997;
	b3.reflect[8] = -0.167107;
	b3.reflect[9] = -0.055340;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.244540;
	b4.reflect[1] = 0.028603;
	b4.reflect[2] = -0.416884;
	b4.reflect[3] = 0.036621;
	b4.reflect[4] = -0.343636;
	b4.reflect[5] = 0.210904;
	b4.reflect[6] = -0.004709;
	b4.reflect[7] = 0.348563;
	b4.reflect[8] = -0.199505;
	b4.reflect[9] = -0.041046;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.764271;
	b5.reflect[1] = -0.077954;
	b5.reflect[2] = -0.332320;
	b5.reflect[3] = 0.026083;
	b5.reflect[4] = -0.145192;
	b5.reflect[5] = 0.312533;
	b5.reflect[6] = 0.023536;
	b5.reflect[7] = 0.081303;
	b5.reflect[8] = -0.104616;
	b5.reflect[9] = 0.104981;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.773713;
	b6.reflect[1] = -0.061512;
	b6.reflect[2] = -0.159999;
	b6.reflect[3] = 0.154220;
	b6.reflect[4] = -0.095692;
	b6.reflect[5] = 0.236460;
	b6.reflect[6] = 0.033682;
	b6.reflect[7] = 0.039525;
	b6.reflect[8] = -0.036492;
	b6.reflect[9] = 0.089413;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.673691;
	b7.reflect[1] = -0.122471;
	b7.reflect[2] = -0.106963;
	b7.reflect[3] = 0.195408;
	b7.reflect[4] = -0.013589;
	b7.reflect[5] = 0.151636;
	b7.reflect[6] = -0.034937;
	b7.reflect[7] = 0.091839;
	b7.reflect[8] = -0.029718;
	b7.reflect[9] = 0.018311;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.565066;
	b8.reflect[1] = -0.070987;
	b8.reflect[2] = -0.129301;
	b8.reflect[3] = 0.139669;
	b8.reflect[4] = 0.001086;
	b8.reflect[5] = 0.108253;
	b8.reflect[6] = -0.004776;
	b8.reflect[7] = 0.063693;
	b8.reflect[8] = -0.028458;
	b8.reflect[9] = 0.015028;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.457417;
	b9.reflect[1] = -0.026239;
	b9.reflect[2] = -0.089760;
	b9.reflect[3] = 0.134256;
	b9.reflect[4] = -0.042206;
	b9.reflect[5] = 0.097856;
	b9.reflect[6] = -0.006061;
	b9.reflect[7] = 0.041769;
	b9.reflect[8] = 0.045919;
	b9.reflect[9] = -0.035022;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.566507;
	b0.reflect[1] = 0.549762;
	b0.reflect[2] = -0.350214;
	b0.reflect[3] = 0.193387;
	b0.reflect[4] = -0.072503;
	b0.reflect[5] = 0.499490;
	b0.reflect[6] = -0.197192;
	b0.reflect[7] = -0.170147;
	b0.reflect[8] = 0.087687;
	b0.reflect[9] = 0.041197;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.584823;
	b1.reflect[1] = 0.567110;
	b1.reflect[2] = -0.396031;
	b1.reflect[3] = 0.188936;
	b1.reflect[4] = 0.000549;
	b1.reflect[5] = 0.542331;
	b1.reflect[6] = -0.067922;
	b1.reflect[7] = -0.236428;
	b1.reflect[8] = 0.084849;
	b1.reflect[9] = -0.020258;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.522881;
	b2.reflect[1] = 0.221263;
	b2.reflect[2] = -0.380578;
	b2.reflect[3] = 0.397101;
	b2.reflect[4] = -0.049576;
	b2.reflect[5] = 0.325636;
	b2.reflect[6] = -0.188624;
	b2.reflect[7] = -0.007006;
	b2.reflect[8] = 0.076041;
	b2.reflect[9] = 0.037076;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.462919;
	b3.reflect[1] = -0.009877;
	b3.reflect[2] = -0.490702;
	b3.reflect[3] = 0.295027;
	b3.reflect[4] = 0.106625;
	b3.reflect[5] = 0.563685;
	b3.reflect[6] = -0.326565;
	b3.reflect[7] = 0.045938;
	b3.reflect[8] = -0.170538;
	b3.reflect[9] = 0.007685;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.336489;
	b4.reflect[1] = 0.027352;
	b4.reflect[2] = -0.461919;
	b4.reflect[3] = 0.325440;
	b4.reflect[4] = 0.078456;
	b4.reflect[5] = 0.411690;
	b4.reflect[6] = -0.244839;
	b4.reflect[7] = 0.044626;
	b4.reflect[8] = -0.095601;
	b4.reflect[9] = 0.096860;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.638720;
	b5.reflect[1] = -0.119475;
	b5.reflect[2] = -0.250930;
	b5.reflect[3] = 0.184925;
	b5.reflect[4] = -0.071081;
	b5.reflect[5] = 0.395124;
	b5.reflect[6] = 0.105281;
	b5.reflect[7] = 0.117448;
	b5.reflect[8] = -0.145099;
	b5.reflect[9] = 0.267014;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.574353;
	b6.reflect[1] = 0.031041;
	b6.reflect[2] = -0.198332;
	b6.reflect[3] = 0.122083;
	b6.reflect[4] = 0.038880;
	b6.reflect[5] = 0.268091;
	b6.reflect[6] = 0.076060;
	b6.reflect[7] = -0.000207;
	b6.reflect[8] = -0.094782;
	b6.reflect[9] = 0.122284;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.495633;
	b7.reflect[1] = -0.034952;
	b7.reflect[2] = -0.103102;
	b7.reflect[3] = 0.138168;
	b7.reflect[4] = 0.004947;
	b7.reflect[5] = 0.126217;
	b7.reflect[6] = 0.001847;
	b7.reflect[7] = 0.092914;
	b7.reflect[8] = -0.008813;
	b7.reflect[9] = 0.000058;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.393726;
	b8.reflect[1] = -0.013974;
	b8.reflect[2] = -0.044298;
	b8.reflect[3] = 0.047274;
	b8.reflect[4] = 0.039534;
	b8.reflect[5] = 0.041355;
	b8.reflect[6] = -0.012355;
	b8.reflect[7] = 0.067557;
	b8.reflect[8] = 0.038580;
	b8.reflect[9] = 0.000583;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.285750;
	b9.reflect[1] = -0.036580;
	b9.reflect[2] = -0.064122;
	b9.reflect[3] = 0.074825;
	b9.reflect[4] = 0.001002;
	b9.reflect[5] = 0.039640;
	b9.reflect[6] = -0.004057;
	b9.reflect[7] = 0.029054;
	b9.reflect[8] = 0.027130;
	b9.reflect[9] = 0.049445;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.698855;
	b0.reflect[1] = 0.457768;
	b0.reflect[2] = -0.208585;
	b0.reflect[3] = 0.267432;
	b0.reflect[4] = -0.175033;
	b0.reflect[5] = 0.337286;
	b0.reflect[6] = -0.173546;
	b0.reflect[7] = -0.223140;
	b0.reflect[8] = -0.042929;
	b0.reflect[9] = 0.129821;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.592652;
	b1.reflect[1] = 0.567102;
	b1.reflect[2] = -0.278119;
	b1.reflect[3] = 0.223483;
	b1.reflect[4] = 0.014007;
	b1.reflect[5] = 0.390187;
	b1.reflect[6] = -0.063027;
	b1.reflect[7] = -0.320816;
	b1.reflect[8] = 0.079213;
	b1.reflect[9] = -0.028207;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.000000;
	b2.reflect[1] = 0.000000;
	b2.reflect[2] = 0.000000;
	b2.reflect[3] = 0.000000;
	b2.reflect[4] = 0.000000;
	b2.reflect[5] = 0.000000;
	b2.reflect[6] = 0.000000;
	b2.reflect[7] = 0.000000;
	b2.reflect[8] = 0.000000;
	b2.reflect[9] = 0.000000;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.000000;
	b3.reflect[1] = 0.000000;
	b3.reflect[2] = 0.000000;
	b3.reflect[3] = 0.000000;
	b3.reflect[4] = 0.000000;
	b3.reflect[5] = 0.000000;
	b3.reflect[6] = 0.000000;
	b3.reflect[7] = 0.000000;
	b3.reflect[8] = 0.000000;
	b3.reflect[9] = 0.000000;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.reflect[9] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.reflect[9] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.reflect[9] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
	b7.reflect[9] = 0.000000;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.000000;
	b8.reflect[1] = 0.000000;
	b8.reflect[2] = 0.000000;
	b8.reflect[3] = 0.000000;
	b8.reflect[4] = 0.000000;
	b8.reflect[5] = 0.000000;
	b8.reflect[6] = 0.000000;
	b8.reflect[7] = 0.000000;
	b8.reflect[8] = 0.000000;
	b8.reflect[9] = 0.000000;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.reflect[9] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.641390;
	b0.reflect[1] = 0.438462;
	b0.reflect[2] = -0.339686;
	b0.reflect[3] = 0.234937;
	b0.reflect[4] = -0.205409;
	b0.reflect[5] = 0.557454;
	b0.reflect[6] = -0.221333;
	b0.reflect[7] = -0.205490;
	b0.reflect[8] = 0.041390;
	b0.reflect[9] = 0.105452;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.571775;
	b1.reflect[1] = 0.533860;
	b1.reflect[2] = -0.379595;
	b1.reflect[3] = 0.201577;
	b1.reflect[4] = -0.272758;
	b1.reflect[5] = 0.552197;
	b1.reflect[6] = -0.182666;
	b1.reflect[7] = -0.198537;
	b1.reflect[8] = 0.035464;
	b1.reflect[9] = 0.118276;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.732097;
	b2.reflect[1] = 0.380510;
	b2.reflect[2] = -0.361374;
	b2.reflect[3] = 0.276133;
	b2.reflect[4] = -0.162042;
	b2.reflect[5] = 0.402503;
	b2.reflect[6] = -0.210546;
	b2.reflect[7] = -0.136911;
	b2.reflect[8] = 0.060499;
	b2.reflect[9] = 0.110364;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.409402;
	b3.reflect[1] = 0.038827;
	b3.reflect[2] = -0.526464;
	b3.reflect[3] = 0.428143;
	b3.reflect[4] = 0.072069;
	b3.reflect[5] = 0.304664;
	b3.reflect[6] = -0.093576;
	b3.reflect[7] = 0.108525;
	b3.reflect[8] = -0.101272;
	b3.reflect[9] = 0.011753;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.610505;
	b4.reflect[1] = 0.190738;
	b4.reflect[2] = -0.370828;
	b4.reflect[3] = 0.491893;
	b4.reflect[4] = 0.165293;
	b4.reflect[5] = 0.508037;
	b4.reflect[6] = -0.340371;
	b4.reflect[7] = -0.098399;
	b4.reflect[8] = -0.064739;
	b4.reflect[9] = 0.063799;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.546870;
	b5.reflect[1] = -0.000453;
	b5.reflect[2] = -0.334827;
	b5.reflect[3] = 0.427948;
	b5.reflect[4] = -0.003966;
	b5.reflect[5] = 0.352588;
	b5.reflect[6] = -0.163471;
	b5.reflect[7] = -0.118127;
	b5.reflect[8] = -0.165455;
	b5.reflect[9] = 0.160361;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.308932;
	b6.reflect[1] = 0.167769;
	b6.reflect[2] = -0.615685;
	b6.reflect[3] = -0.114747;
	b6.reflect[4] = -0.051016;
	b6.reflect[5] = 0.319270;
	b6.reflect[6] = -0.061619;
	b6.reflect[7] = 0.200562;
	b6.reflect[8] = -0.097982;
	b6.reflect[9] = -0.000547;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.279044;
	b7.reflect[1] = -0.029578;
	b7.reflect[2] = -0.324309;
	b7.reflect[3] = -0.002119;
	b7.reflect[4] = -0.274862;
	b7.reflect[5] = 0.210904;
	b7.reflect[6] = 0.101644;
	b7.reflect[7] = 0.129676;
	b7.reflect[8] = -0.149706;
	b7.reflect[9] = 0.097286;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.362704;
	b8.reflect[1] = -0.021606;
	b8.reflect[2] = -0.132366;
	b8.reflect[3] = -0.017605;
	b8.reflect[4] = -0.081939;
	b8.reflect[5] = 0.153094;
	b8.reflect[6] = -0.025350;
	b8.reflect[7] = 0.008695;
	b8.reflect[8] = -0.022902;
	b8.reflect[9] = -0.000282;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.293514;
	b9.reflect[1] = -0.019647;
	b9.reflect[2] = -0.085282;
	b9.reflect[3] = 0.116732;
	b9.reflect[4] = -0.021697;
	b9.reflect[5] = 0.061797;
	b9.reflect[6] = 0.007585;
	b9.reflect[7] = -0.017083;
	b9.reflect[8] = -0.006627;
	b9.reflect[9] = 0.074849;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.633788;
	b0.reflect[1] = 0.662168;
	b0.reflect[2] = -0.279253;
	b0.reflect[3] = 0.218468;
	b0.reflect[4] = -0.326384;
	b0.reflect[5] = 0.411799;
	b0.reflect[6] = 0.001953;
	b0.reflect[7] = -0.401656;
	b0.reflect[8] = 0.105708;
	b0.reflect[9] = 0.190562;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.619935;
	b1.reflect[1] = 0.697172;
	b1.reflect[2] = -0.259065;
	b1.reflect[3] = 0.219734;
	b1.reflect[4] = -0.282461;
	b1.reflect[5] = 0.427279;
	b1.reflect[6] = -0.006669;
	b1.reflect[7] = -0.360778;
	b1.reflect[8] = 0.065785;
	b1.reflect[9] = 0.173196;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.620089;
	b2.reflect[1] = 0.715849;
	b2.reflect[2] = -0.333602;
	b2.reflect[3] = 0.150613;
	b2.reflect[4] = -0.180128;
	b2.reflect[5] = 0.431700;
	b2.reflect[6] = -0.046971;
	b2.reflect[7] = -0.257742;
	b2.reflect[8] = 0.022271;
	b2.reflect[9] = 0.151897;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.674719;
	b3.reflect[1] = 0.608095;
	b3.reflect[2] = -0.221610;
	b3.reflect[3] = 0.275524;
	b3.reflect[4] = -0.360196;
	b3.reflect[5] = 0.516235;
	b3.reflect[6] = -0.100921;
	b3.reflect[7] = -0.219165;
	b3.reflect[8] = 0.006138;
	b3.reflect[9] = 0.022754;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.665044;
	b4.reflect[1] = 0.615990;
	b4.reflect[2] = -0.275757;
	b4.reflect[3] = 0.284571;
	b4.reflect[4] = -0.261549;
	b4.reflect[5] = 0.429948;
	b4.reflect[6] = 0.010382;
	b4.reflect[7] = -0.258095;
	b4.reflect[8] = -0.009567;
	b4.reflect[9] = 0.046618;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.731127;
	b5.reflect[1] = 0.695085;
	b5.reflect[2] = -0.292937;
	b5.reflect[3] = 0.303863;
	b5.reflect[4] = -0.106612;
	b5.reflect[5] = 0.343002;
	b5.reflect[6] = -0.059968;
	b5.reflect[7] = -0.281760;
	b5.reflect[8] = 0.046752;
	b5.reflect[9] = 0.082051;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.705962;
	b6.reflect[1] = 0.655986;
	b6.reflect[2] = -0.360041;
	b6.reflect[3] = 0.251176;
	b6.reflect[4] = -0.091382;
	b6.reflect[5] = 0.396416;
	b6.reflect[6] = -0.113082;
	b6.reflect[7] = -0.238879;
	b6.reflect[8] = 0.053691;
	b6.reflect[9] = 0.111266;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.698282;
	b7.reflect[1] = 0.657970;
	b7.reflect[2] = -0.369741;
	b7.reflect[3] = 0.240682;
	b7.reflect[4] = -0.022573;
	b7.reflect[5] = 0.451047;
	b7.reflect[6] = 0.043091;
	b7.reflect[7] = -0.330681;
	b7.reflect[8] = -0.090717;
	b7.reflect[9] = 0.186531;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.678010;
	b8.reflect[1] = 0.650035;
	b8.reflect[2] = -0.385383;
	b8.reflect[3] = 0.198702;
	b8.reflect[4] = -0.087946;
	b8.reflect[5] = 0.393575;
	b8.reflect[6] = 0.095286;
	b8.reflect[7] = -0.315011;
	b8.reflect[8] = -0.077394;
	b8.reflect[9] = 0.168339;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = NaN;
	b9.reflect[1] = NaN;
	b9.reflect[2] = NaN;
	b9.reflect[3] = NaN;
	b9.reflect[4] = NaN;
	b9.reflect[5] = NaN;
	b9.reflect[6] = NaN;
	b9.reflect[7] = NaN;
	b9.reflect[8] = NaN;
	b9.reflect[9] = NaN;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.621296;
	b0.reflect[1] = 0.339716;
	b0.reflect[2] = -0.218346;
	b0.reflect[3] = 0.252902;
	b0.reflect[4] = -0.202325;
	b0.reflect[5] = 0.451316;
	b0.reflect[6] = -0.300043;
	b0.reflect[7] = -0.121850;
	b0.reflect[8] = 0.535402;
	b0.reflect[9] = 0.269141;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.790622;
	b1.reflect[1] = 0.512593;
	b1.reflect[2] = -0.162410;
	b1.reflect[3] = 0.155354;
	b1.reflect[4] = -0.198759;
	b1.reflect[5] = 0.366144;
	b1.reflect[6] = -0.264251;
	b1.reflect[7] = -0.052206;
	b1.reflect[8] = 0.445102;
	b1.reflect[9] = 0.140941;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.669326;
	b2.reflect[1] = 0.367978;
	b2.reflect[2] = -0.220066;
	b2.reflect[3] = 0.220833;
	b2.reflect[4] = -0.323423;
	b2.reflect[5] = 0.520255;
	b2.reflect[6] = -0.346903;
	b2.reflect[7] = -0.236054;
	b2.reflect[8] = 0.211559;
	b2.reflect[9] = 0.161785;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.712614;
	b3.reflect[1] = 0.333063;
	b3.reflect[2] = -0.519519;
	b3.reflect[3] = 0.038812;
	b3.reflect[4] = -0.136816;
	b3.reflect[5] = 0.614269;
	b3.reflect[6] = -0.160322;
	b3.reflect[7] = -0.168520;
	b3.reflect[8] = 0.280965;
	b3.reflect[9] = 0.094908;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.556391;
	b4.reflect[1] = 0.211119;
	b4.reflect[2] = -0.210343;
	b4.reflect[3] = 0.139227;
	b4.reflect[4] = -0.119835;
	b4.reflect[5] = 0.406985;
	b4.reflect[6] = -0.280018;
	b4.reflect[7] = 0.048315;
	b4.reflect[8] = 0.154057;
	b4.reflect[9] = 0.189510;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.284042;
	b5.reflect[1] = 0.141740;
	b5.reflect[2] = -0.166207;
	b5.reflect[3] = 0.071193;
	b5.reflect[4] = 0.037240;
	b5.reflect[5] = 0.140390;
	b5.reflect[6] = -0.015997;
	b5.reflect[7] = -0.025134;
	b5.reflect[8] = 0.067752;
	b5.reflect[9] = 0.049640;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.reflect[9] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
	b7.reflect[9] = 0.000000;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.000000;
	b8.reflect[1] = 0.000000;
	b8.reflect[2] = 0.000000;
	b8.reflect[3] = 0.000000;
	b8.reflect[4] = 0.000000;
	b8.reflect[5] = 0.000000;
	b8.reflect[6] = 0.000000;
	b8.reflect[7] = 0.000000;
	b8.reflect[8] = 0.000000;
	b8.reflect[9] = 0.000000;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.reflect[9] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[5] = version;
 
	word.name = "right";
 
	db.words[0] = word;
 
	b0.reflect[0] = -0.828556;
	b0.reflect[1] = -0.106081;
	b0.reflect[2] = -0.147083;
	b0.reflect[3] = 0.235961;
	b0.reflect[4] = 0.018439;
	b0.reflect[5] = 0.161446;
	b0.reflect[6] = 0.019523;
	b0.reflect[7] = 0.081750;
	b0.reflect[8] = 0.018394;
	b0.reflect[9] = 0.028844;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.869933;
	b1.reflect[1] = -0.087546;
	b1.reflect[2] = -0.092501;
	b1.reflect[3] = 0.161382;
	b1.reflect[4] = 0.001266;
	b1.reflect[5] = 0.131496;
	b1.reflect[6] = -0.021811;
	b1.reflect[7] = 0.066459;
	b1.reflect[8] = -0.007809;
	b1.reflect[9] = 0.001360;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.901069;
	b2.reflect[1] = -0.118933;
	b2.reflect[2] = -0.206500;
	b2.reflect[3] = 0.217807;
	b2.reflect[4] = 0.052557;
	b2.reflect[5] = 0.177179;
	b2.reflect[6] = -0.057005;
	b2.reflect[7] = 0.057487;
	b2.reflect[8] = -0.036071;
	b2.reflect[9] = -0.030301;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.930154;
	b3.reflect[1] = -0.129194;
	b3.reflect[2] = -0.114197;
	b3.reflect[3] = 0.245791;
	b3.reflect[4] = -0.002734;
	b3.reflect[5] = 0.163619;
	b3.reflect[6] = 0.040348;
	b3.reflect[7] = 0.068486;
	b3.reflect[8] = -0.052292;
	b3.reflect[9] = -0.058838;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.926465;
	b4.reflect[1] = -0.093464;
	b4.reflect[2] = -0.200594;
	b4.reflect[3] = 0.179698;
	b4.reflect[4] = 0.024198;
	b4.reflect[5] = 0.138929;
	b4.reflect[6] = -0.015424;
	b4.reflect[7] = 0.145177;
	b4.reflect[8] = 0.038272;
	b4.reflect[9] = -0.014575;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.924283;
	b5.reflect[1] = -0.092513;
	b5.reflect[2] = -0.169862;
	b5.reflect[3] = 0.179583;
	b5.reflect[4] = -0.041209;
	b5.reflect[5] = 0.077837;
	b5.reflect[6] = -0.000945;
	b5.reflect[7] = 0.195367;
	b5.reflect[8] = 0.000675;
	b5.reflect[9] = 0.074508;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.902810;
	b6.reflect[1] = -0.126373;
	b6.reflect[2] = -0.226609;
	b6.reflect[3] = 0.208525;
	b6.reflect[4] = -0.021694;
	b6.reflect[5] = 0.206155;
	b6.reflect[6] = -0.069121;
	b6.reflect[7] = 0.094958;
	b6.reflect[8] = -0.005126;
	b6.reflect[9] = 0.015368;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.842643;
	b7.reflect[1] = 0.415345;
	b7.reflect[2] = 0.182326;
	b7.reflect[3] = 0.396056;
	b7.reflect[4] = 0.114581;
	b7.reflect[5] = 0.150379;
	b7.reflect[6] = -0.092068;
	b7.reflect[7] = 0.088611;
	b7.reflect[8] = -0.087526;
	b7.reflect[9] = 0.072835;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.617955;
	b8.reflect[1] = 0.305703;
	b8.reflect[2] = -0.118580;
	b8.reflect[3] = 0.289636;
	b8.reflect[4] = 0.084141;
	b8.reflect[5] = 0.284848;
	b8.reflect[6] = -0.000893;
	b8.reflect[7] = -0.089626;
	b8.reflect[8] = -0.047688;
	b8.reflect[9] = 0.053910;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.469651;
	b9.reflect[1] = 0.275079;
	b9.reflect[2] = -0.227025;
	b9.reflect[3] = 0.237732;
	b9.reflect[4] = 0.080676;
	b9.reflect[5] = 0.189803;
	b9.reflect[6] = -0.269798;
	b9.reflect[7] = 0.006606;
	b9.reflect[8] = -0.056628;
	b9.reflect[9] = 0.135538;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.669629;
	b0.reflect[1] = 0.340008;
	b0.reflect[2] = -0.488267;
	b0.reflect[3] = 0.304800;
	b0.reflect[4] = 0.238408;
	b0.reflect[5] = 0.317839;
	b0.reflect[6] = -0.319406;
	b0.reflect[7] = 0.043795;
	b0.reflect[8] = -0.207565;
	b0.reflect[9] = 0.158218;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.950165;
	b1.reflect[1] = 0.427031;
	b1.reflect[2] = -0.094672;
	b1.reflect[3] = 0.319542;
	b1.reflect[4] = 0.308817;
	b1.reflect[5] = 0.419294;
	b1.reflect[6] = -0.440787;
	b1.reflect[7] = 0.123273;
	b1.reflect[8] = -0.294169;
	b1.reflect[9] = 0.217837;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.946983;
	b2.reflect[1] = 0.345653;
	b2.reflect[2] = -0.007678;
	b2.reflect[3] = 0.332800;
	b2.reflect[4] = 0.236835;
	b2.reflect[5] = 0.370951;
	b2.reflect[6] = -0.216030;
	b2.reflect[7] = -0.029892;
	b2.reflect[8] = -0.048957;
	b2.reflect[9] = 0.147997;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.853936;
	b3.reflect[1] = -0.081969;
	b3.reflect[2] = -0.316797;
	b3.reflect[3] = 0.094785;
	b3.reflect[4] = 0.121319;
	b3.reflect[5] = 0.246934;
	b3.reflect[6] = 0.029239;
	b3.reflect[7] = 0.076170;
	b3.reflect[8] = -0.044848;
	b3.reflect[9] = 0.116526;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.839091;
	b4.reflect[1] = 0.002682;
	b4.reflect[2] = -0.217011;
	b4.reflect[3] = 0.129333;
	b4.reflect[4] = 0.051540;
	b4.reflect[5] = 0.243329;
	b4.reflect[6] = -0.023658;
	b4.reflect[7] = 0.046892;
	b4.reflect[8] = -0.092271;
	b4.reflect[9] = 0.115846;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.636800;
	b5.reflect[1] = 0.458626;
	b5.reflect[2] = -0.434194;
	b5.reflect[3] = 0.336796;
	b5.reflect[4] = 0.195830;
	b5.reflect[5] = 0.388113;
	b5.reflect[6] = -0.356480;
	b5.reflect[7] = 0.060612;
	b5.reflect[8] = -0.194034;
	b5.reflect[9] = -0.051273;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.313589;
	b6.reflect[1] = -0.333631;
	b6.reflect[2] = -0.547335;
	b6.reflect[3] = 0.286898;
	b6.reflect[4] = -0.022106;
	b6.reflect[5] = 0.280794;
	b6.reflect[6] = 0.027636;
	b6.reflect[7] = 0.101031;
	b6.reflect[8] = -0.057017;
	b6.reflect[9] = 0.072187;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.330933;
	b7.reflect[1] = -0.303381;
	b7.reflect[2] = -0.512170;
	b7.reflect[3] = 0.085842;
	b7.reflect[4] = -0.198937;
	b7.reflect[5] = 0.064704;
	b7.reflect[6] = 0.005619;
	b7.reflect[7] = 0.321861;
	b7.reflect[8] = -0.167265;
	b7.reflect[9] = 0.001560;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.585968;
	b8.reflect[1] = -0.262160;
	b8.reflect[2] = -0.069054;
	b8.reflect[3] = 0.089653;
	b8.reflect[4] = -0.030432;
	b8.reflect[5] = 0.209947;
	b8.reflect[6] = 0.058914;
	b8.reflect[7] = 0.113948;
	b8.reflect[8] = -0.154696;
	b8.reflect[9] = 0.093141;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.499391;
	b9.reflect[1] = -0.120065;
	b9.reflect[2] = -0.142275;
	b9.reflect[3] = 0.101394;
	b9.reflect[4] = 0.050097;
	b9.reflect[5] = 0.145557;
	b9.reflect[6] = -0.025148;
	b9.reflect[7] = 0.134768;
	b9.reflect[8] = -0.047659;
	b9.reflect[9] = 0.083312;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.584953;
	b0.reflect[1] = 0.151584;
	b0.reflect[2] = -0.363294;
	b0.reflect[3] = 0.283905;
	b0.reflect[4] = 0.138148;
	b0.reflect[5] = 0.380306;
	b0.reflect[6] = -0.428187;
	b0.reflect[7] = 0.043979;
	b0.reflect[8] = -0.045619;
	b0.reflect[9] = 0.086765;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.845114;
	b1.reflect[1] = 0.201669;
	b1.reflect[2] = -0.130521;
	b1.reflect[3] = 0.192039;
	b1.reflect[4] = 0.063816;
	b1.reflect[5] = 0.468772;
	b1.reflect[6] = -0.488904;
	b1.reflect[7] = 0.104251;
	b1.reflect[8] = -0.122480;
	b1.reflect[9] = 0.222862;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.950201;
	b2.reflect[1] = 0.350547;
	b2.reflect[2] = -0.047362;
	b2.reflect[3] = 0.317288;
	b2.reflect[4] = 0.169598;
	b2.reflect[5] = 0.415697;
	b2.reflect[6] = -0.333269;
	b2.reflect[7] = 0.143931;
	b2.reflect[8] = -0.051686;
	b2.reflect[9] = 0.087850;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.879191;
	b3.reflect[1] = 0.011392;
	b3.reflect[2] = -0.146351;
	b3.reflect[3] = 0.277038;
	b3.reflect[4] = 0.053298;
	b3.reflect[5] = 0.193737;
	b3.reflect[6] = -0.095671;
	b3.reflect[7] = 0.169391;
	b3.reflect[8] = -0.003936;
	b3.reflect[9] = 0.188337;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.863556;
	b4.reflect[1] = -0.016314;
	b4.reflect[2] = -0.185510;
	b4.reflect[3] = 0.201797;
	b4.reflect[4] = 0.079214;
	b4.reflect[5] = 0.348075;
	b4.reflect[6] = -0.097498;
	b4.reflect[7] = 0.071605;
	b4.reflect[8] = 0.067731;
	b4.reflect[9] = 0.093823;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.739877;
	b5.reflect[1] = 0.363903;
	b5.reflect[2] = -0.255282;
	b5.reflect[3] = 0.265402;
	b5.reflect[4] = 0.151115;
	b5.reflect[5] = 0.482414;
	b5.reflect[6] = -0.411774;
	b5.reflect[7] = -0.036718;
	b5.reflect[8] = 0.035193;
	b5.reflect[9] = 0.006030;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.804950;
	b6.reflect[1] = 0.023780;
	b6.reflect[2] = -0.129672;
	b6.reflect[3] = 0.296384;
	b6.reflect[4] = -0.049879;
	b6.reflect[5] = 0.536522;
	b6.reflect[6] = 0.020197;
	b6.reflect[7] = -0.101239;
	b6.reflect[8] = -0.072952;
	b6.reflect[9] = 0.131896;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.745404;
	b7.reflect[1] = -0.415859;
	b7.reflect[2] = -0.343134;
	b7.reflect[3] = 0.441119;
	b7.reflect[4] = 0.109785;
	b7.reflect[5] = 0.329982;
	b7.reflect[6] = 0.279715;
	b7.reflect[7] = 0.309510;
	b7.reflect[8] = -0.233403;
	b7.reflect[9] = 0.136533;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.694024;
	b8.reflect[1] = -0.092753;
	b8.reflect[2] = -0.196506;
	b8.reflect[3] = 0.108848;
	b8.reflect[4] = -0.060096;
	b8.reflect[5] = 0.208411;
	b8.reflect[6] = 0.112826;
	b8.reflect[7] = 0.074872;
	b8.reflect[8] = -0.097978;
	b8.reflect[9] = 0.093943;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.681342;
	b9.reflect[1] = -0.105150;
	b9.reflect[2] = -0.031078;
	b9.reflect[3] = 0.196379;
	b9.reflect[4] = 0.061679;
	b9.reflect[5] = 0.193280;
	b9.reflect[6] = -0.030416;
	b9.reflect[7] = 0.079218;
	b9.reflect[8] = 0.042620;
	b9.reflect[9] = 0.060203;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.271789;
	b0.reflect[1] = 0.380505;
	b0.reflect[2] = -0.353341;
	b0.reflect[3] = 0.067646;
	b0.reflect[4] = -0.020215;
	b0.reflect[5] = 0.695480;
	b0.reflect[6] = -0.432963;
	b0.reflect[7] = 0.249448;
	b0.reflect[8] = 0.029198;
	b0.reflect[9] = -0.057279;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.459039;
	b1.reflect[1] = 0.172966;
	b1.reflect[2] = -0.288986;
	b1.reflect[3] = 0.180758;
	b1.reflect[4] = 0.087437;
	b1.reflect[5] = 0.640350;
	b1.reflect[6] = -0.461934;
	b1.reflect[7] = 0.273443;
	b1.reflect[8] = -0.184031;
	b1.reflect[9] = 0.078240;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.000000;
	b2.reflect[1] = 0.000000;
	b2.reflect[2] = 0.000000;
	b2.reflect[3] = 0.000000;
	b2.reflect[4] = 0.000000;
	b2.reflect[5] = 0.000000;
	b2.reflect[6] = 0.000000;
	b2.reflect[7] = 0.000000;
	b2.reflect[8] = 0.000000;
	b2.reflect[9] = 0.000000;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.000000;
	b3.reflect[1] = 0.000000;
	b3.reflect[2] = 0.000000;
	b3.reflect[3] = 0.000000;
	b3.reflect[4] = 0.000000;
	b3.reflect[5] = 0.000000;
	b3.reflect[6] = 0.000000;
	b3.reflect[7] = 0.000000;
	b3.reflect[8] = 0.000000;
	b3.reflect[9] = 0.000000;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.reflect[9] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.reflect[9] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.reflect[9] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
	b7.reflect[9] = 0.000000;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.000000;
	b8.reflect[1] = 0.000000;
	b8.reflect[2] = 0.000000;
	b8.reflect[3] = 0.000000;
	b8.reflect[4] = 0.000000;
	b8.reflect[5] = 0.000000;
	b8.reflect[6] = 0.000000;
	b8.reflect[7] = 0.000000;
	b8.reflect[8] = 0.000000;
	b8.reflect[9] = 0.000000;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.reflect[9] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.286680;
	b0.reflect[1] = 0.345494;
	b0.reflect[2] = -0.307955;
	b0.reflect[3] = 0.153652;
	b0.reflect[4] = -0.096195;
	b0.reflect[5] = 0.794310;
	b0.reflect[6] = -0.251141;
	b0.reflect[7] = 0.222438;
	b0.reflect[8] = 0.021159;
	b0.reflect[9] = -0.171069;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.275484;
	b1.reflect[1] = 0.264316;
	b1.reflect[2] = -0.224629;
	b1.reflect[3] = 0.205240;
	b1.reflect[4] = -0.059232;
	b1.reflect[5] = 0.781339;
	b1.reflect[6] = -0.216657;
	b1.reflect[7] = 0.292361;
	b1.reflect[8] = -0.011942;
	b1.reflect[9] = -0.166566;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.000000;
	b2.reflect[1] = 0.000000;
	b2.reflect[2] = 0.000000;
	b2.reflect[3] = 0.000000;
	b2.reflect[4] = 0.000000;
	b2.reflect[5] = 0.000000;
	b2.reflect[6] = 0.000000;
	b2.reflect[7] = 0.000000;
	b2.reflect[8] = 0.000000;
	b2.reflect[9] = 0.000000;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.000000;
	b3.reflect[1] = 0.000000;
	b3.reflect[2] = 0.000000;
	b3.reflect[3] = 0.000000;
	b3.reflect[4] = 0.000000;
	b3.reflect[5] = 0.000000;
	b3.reflect[6] = 0.000000;
	b3.reflect[7] = 0.000000;
	b3.reflect[8] = 0.000000;
	b3.reflect[9] = 0.000000;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.reflect[9] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.reflect[9] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.reflect[9] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
	b7.reflect[9] = 0.000000;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.000000;
	b8.reflect[1] = 0.000000;
	b8.reflect[2] = 0.000000;
	b8.reflect[3] = 0.000000;
	b8.reflect[4] = 0.000000;
	b8.reflect[5] = 0.000000;
	b8.reflect[6] = 0.000000;
	b8.reflect[7] = 0.000000;
	b8.reflect[8] = 0.000000;
	b8.reflect[9] = 0.000000;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.reflect[9] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.570844;
	b0.reflect[1] = -0.151765;
	b0.reflect[2] = -0.216197;
	b0.reflect[3] = 0.156719;
	b0.reflect[4] = -0.053204;
	b0.reflect[5] = 0.170986;
	b0.reflect[6] = -0.024865;
	b0.reflect[7] = 0.064942;
	b0.reflect[8] = -0.009876;
	b0.reflect[9] = 0.123608;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.656367;
	b1.reflect[1] = -0.090974;
	b1.reflect[2] = -0.220732;
	b1.reflect[3] = 0.168281;
	b1.reflect[4] = 0.058872;
	b1.reflect[5] = 0.128822;
	b1.reflect[6] = -0.031095;
	b1.reflect[7] = 0.065443;
	b1.reflect[8] = 0.006885;
	b1.reflect[9] = 0.065370;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.648212;
	b2.reflect[1] = -0.058572;
	b2.reflect[2] = -0.119163;
	b2.reflect[3] = 0.105191;
	b2.reflect[4] = -0.058347;
	b2.reflect[5] = 0.164395;
	b2.reflect[6] = -0.038088;
	b2.reflect[7] = 0.099892;
	b2.reflect[8] = 0.036004;
	b2.reflect[9] = 0.046085;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.630183;
	b3.reflect[1] = -0.064329;
	b3.reflect[2] = -0.156947;
	b3.reflect[3] = 0.235598;
	b3.reflect[4] = -0.032732;
	b3.reflect[5] = 0.174642;
	b3.reflect[6] = -0.090051;
	b3.reflect[7] = 0.124625;
	b3.reflect[8] = -0.012187;
	b3.reflect[9] = -0.022262;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.657076;
	b4.reflect[1] = -0.097930;
	b4.reflect[2] = -0.228988;
	b4.reflect[3] = 0.276413;
	b4.reflect[4] = 0.044776;
	b4.reflect[5] = 0.192590;
	b4.reflect[6] = -0.020566;
	b4.reflect[7] = 0.111010;
	b4.reflect[8] = 0.040153;
	b4.reflect[9] = 0.049549;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.430822;
	b5.reflect[1] = 0.450569;
	b5.reflect[2] = -0.182583;
	b5.reflect[3] = 0.174523;
	b5.reflect[4] = 0.028462;
	b5.reflect[5] = 0.453225;
	b5.reflect[6] = 0.044645;
	b5.reflect[7] = 0.089036;
	b5.reflect[8] = 0.059559;
	b5.reflect[9] = 0.061905;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.673027;
	b6.reflect[1] = 0.264933;
	b6.reflect[2] = 0.069680;
	b6.reflect[3] = 0.384189;
	b6.reflect[4] = -0.015612;
	b6.reflect[5] = 0.346933;
	b6.reflect[6] = -0.289363;
	b6.reflect[7] = 0.125830;
	b6.reflect[8] = 0.048259;
	b6.reflect[9] = 0.286601;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.509652;
	b7.reflect[1] = -0.001634;
	b7.reflect[2] = -0.174699;
	b7.reflect[3] = 0.163854;
	b7.reflect[4] = -0.044561;
	b7.reflect[5] = 0.267875;
	b7.reflect[6] = -0.060613;
	b7.reflect[7] = 0.003829;
	b7.reflect[8] = 0.016331;
	b7.reflect[9] = 0.127020;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.242696;
	b8.reflect[1] = 0.072541;
	b8.reflect[2] = -0.187069;
	b8.reflect[3] = 0.022659;
	b8.reflect[4] = -0.127164;
	b8.reflect[5] = 0.286346;
	b8.reflect[6] = -0.031500;
	b8.reflect[7] = 0.051757;
	b8.reflect[8] = 0.014248;
	b8.reflect[9] = 0.057993;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.032931;
	b9.reflect[1] = 0.227596;
	b9.reflect[2] = -0.090537;
	b9.reflect[3] = -0.011777;
	b9.reflect[4] = -0.159984;
	b9.reflect[5] = 0.366021;
	b9.reflect[6] = 0.026339;
	b9.reflect[7] = 0.034816;
	b9.reflect[8] = -0.038127;
	b9.reflect[9] = 0.029661;
	b9.energy = -1;

	version.subset[9] = b9;
 
	word.versions[5] = version;
 
	word.name = "left";
 
	db.words[1] = word;
 
	*current_db = db; 
	return; 
} 
