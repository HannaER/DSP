#include "load_db.h" 

void load_db(db_t* current_db){

	block_t b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11; 
	version_t version; 
	word_t word; 
	db_t db; 
	b0.reflect[0] = -0.233854;
	b0.reflect[1] = 0.780095;
	b0.reflect[2] = -0.384965;
	b0.reflect[3] = 0.102594;
	b0.reflect[4] = -0.153967;
	b0.reflect[5] = 0.632731;
	b0.reflect[6] = -0.074205;
	b0.reflect[7] = 0.321069;
	b0.reflect[8] = 0.186086;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.554818;
	b1.reflect[1] = 0.505913;
	b1.reflect[2] = -0.333928;
	b1.reflect[3] = 0.484225;
	b1.reflect[4] = -0.019051;
	b1.reflect[5] = 0.698760;
	b1.reflect[6] = -0.300135;
	b1.reflect[7] = -0.213548;
	b1.reflect[8] = -0.168156;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.595709;
	b2.reflect[1] = 0.535721;
	b2.reflect[2] = -0.291119;
	b2.reflect[3] = 0.510209;
	b2.reflect[4] = -0.010434;
	b2.reflect[5] = 0.776023;
	b2.reflect[6] = -0.058471;
	b2.reflect[7] = -0.120893;
	b2.reflect[8] = -0.086770;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.554060;
	b3.reflect[1] = 0.487616;
	b3.reflect[2] = -0.387667;
	b3.reflect[3] = 0.500444;
	b3.reflect[4] = -0.087568;
	b3.reflect[5] = 0.726584;
	b3.reflect[6] = -0.128257;
	b3.reflect[7] = -0.044158;
	b3.reflect[8] = -0.111628;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.885413;
	b4.reflect[1] = 0.500095;
	b4.reflect[2] = -0.151346;
	b4.reflect[3] = 0.450632;
	b4.reflect[4] = -0.199488;
	b4.reflect[5] = 0.337401;
	b4.reflect[6] = -0.267954;
	b4.reflect[7] = 0.012989;
	b4.reflect[8] = 0.115040;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.152006;
	b5.reflect[1] = 0.489522;
	b5.reflect[2] = -0.349527;
	b5.reflect[3] = 0.317532;
	b5.reflect[4] = -0.068952;
	b5.reflect[5] = 0.336845;
	b5.reflect[6] = 0.008120;
	b5.reflect[7] = 0.016910;
	b5.reflect[8] = 0.037053;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.173309;
	b6.reflect[1] = 0.264428;
	b6.reflect[2] = -0.657542;
	b6.reflect[3] = 0.412632;
	b6.reflect[4] = 0.171079;
	b6.reflect[5] = 0.797154;
	b6.reflect[6] = -0.034811;
	b6.reflect[7] = 0.122678;
	b6.reflect[8] = -0.132226;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.261449;
	b7.reflect[1] = 0.452130;
	b7.reflect[2] = -0.540224;
	b7.reflect[3] = 0.281311;
	b7.reflect[4] = 0.104302;
	b7.reflect[5] = 0.809322;
	b7.reflect[6] = -0.183178;
	b7.reflect[7] = 0.221948;
	b7.reflect[8] = -0.253674;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.413864;
	b8.reflect[1] = 0.247269;
	b8.reflect[2] = -0.386064;
	b8.reflect[3] = 0.293356;
	b8.reflect[4] = -0.103750;
	b8.reflect[5] = 0.781720;
	b8.reflect[6] = -0.147927;
	b8.reflect[7] = 0.014451;
	b8.reflect[8] = -0.312579;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.494338;
	b9.reflect[1] = 0.475333;
	b9.reflect[2] = -0.226870;
	b9.reflect[3] = 0.258370;
	b9.reflect[4] = -0.164119;
	b9.reflect[5] = 0.283885;
	b9.reflect[6] = 0.032445;
	b9.reflect[7] = 0.216131;
	b9.reflect[8] = -0.053488;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.320271;
	b10.reflect[1] = 0.426509;
	b10.reflect[2] = 0.170868;
	b10.reflect[3] = 0.279532;
	b10.reflect[4] = 0.131572;
	b10.reflect[5] = 0.233329;
	b10.reflect[6] = -0.078000;
	b10.reflect[7] = -0.069502;
	b10.reflect[8] = -0.018387;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.124300;
	b11.reflect[1] = 0.164664;
	b11.reflect[2] = 0.013660;
	b11.reflect[3] = 0.082621;
	b11.reflect[4] = 0.019520;
	b11.reflect[5] = -0.030231;
	b11.reflect[6] = 0.001368;
	b11.reflect[7] = 0.118429;
	b11.reflect[8] = -0.018335;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.250975;
	b0.reflect[1] = 0.809980;
	b0.reflect[2] = -0.304697;
	b0.reflect[3] = 0.357597;
	b0.reflect[4] = -0.034614;
	b0.reflect[5] = 0.257843;
	b0.reflect[6] = 0.066620;
	b0.reflect[7] = 0.277220;
	b0.reflect[8] = 0.271489;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.639669;
	b1.reflect[1] = 0.558686;
	b1.reflect[2] = -0.354362;
	b1.reflect[3] = 0.511033;
	b1.reflect[4] = -0.021202;
	b1.reflect[5] = 0.676714;
	b1.reflect[6] = -0.308268;
	b1.reflect[7] = -0.094290;
	b1.reflect[8] = -0.161866;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.616534;
	b2.reflect[1] = 0.542027;
	b2.reflect[2] = -0.319905;
	b2.reflect[3] = 0.437135;
	b2.reflect[4] = 0.038210;
	b2.reflect[5] = 0.556825;
	b2.reflect[6] = 0.101343;
	b2.reflect[7] = -0.239458;
	b2.reflect[8] = 0.018605;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.510513;
	b3.reflect[1] = 0.539241;
	b3.reflect[2] = -0.343823;
	b3.reflect[3] = 0.371790;
	b3.reflect[4] = -0.123358;
	b3.reflect[5] = 0.608377;
	b3.reflect[6] = 0.185385;
	b3.reflect[7] = -0.155244;
	b3.reflect[8] = 0.154886;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.612526;
	b4.reflect[1] = 0.482120;
	b4.reflect[2] = -0.504210;
	b4.reflect[3] = 0.318267;
	b4.reflect[4] = 0.032754;
	b4.reflect[5] = 0.598960;
	b4.reflect[6] = -0.106745;
	b4.reflect[7] = -0.097067;
	b4.reflect[8] = -0.016434;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.353355;
	b5.reflect[1] = 0.553543;
	b5.reflect[2] = -0.281922;
	b5.reflect[3] = 0.243904;
	b5.reflect[4] = -0.001210;
	b5.reflect[5] = 0.258911;
	b5.reflect[6] = -0.011384;
	b5.reflect[7] = 0.124568;
	b5.reflect[8] = -0.015982;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.339049;
	b6.reflect[1] = 0.012499;
	b6.reflect[2] = -0.624760;
	b6.reflect[3] = 0.586039;
	b6.reflect[4] = 0.367070;
	b6.reflect[5] = 0.654777;
	b6.reflect[6] = -0.090743;
	b6.reflect[7] = 0.009130;
	b6.reflect[8] = -0.176778;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.427900;
	b7.reflect[1] = 0.236766;
	b7.reflect[2] = -0.523224;
	b7.reflect[3] = 0.478828;
	b7.reflect[4] = 0.240429;
	b7.reflect[5] = 0.790404;
	b7.reflect[6] = -0.243950;
	b7.reflect[7] = 0.143151;
	b7.reflect[8] = -0.297608;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.612213;
	b8.reflect[1] = 0.275694;
	b8.reflect[2] = -0.278378;
	b8.reflect[3] = 0.342089;
	b8.reflect[4] = 0.216865;
	b8.reflect[5] = 0.643108;
	b8.reflect[6] = -0.091672;
	b8.reflect[7] = -0.166662;
	b8.reflect[8] = -0.065344;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.193298;
	b9.reflect[1] = 0.303357;
	b9.reflect[2] = -0.292674;
	b9.reflect[3] = 0.212156;
	b9.reflect[4] = -0.158991;
	b9.reflect[5] = 0.265549;
	b9.reflect[6] = 0.106193;
	b9.reflect[7] = 0.256360;
	b9.reflect[8] = -0.071141;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.263959;
	b10.reflect[1] = 0.466952;
	b10.reflect[2] = 0.269391;
	b10.reflect[3] = 0.414495;
	b10.reflect[4] = -0.131777;
	b10.reflect[5] = 0.015831;
	b10.reflect[6] = -0.043726;
	b10.reflect[7] = 0.041211;
	b10.reflect[8] = 0.055208;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.065639;
	b11.reflect[1] = 0.214893;
	b11.reflect[2] = -0.005399;
	b11.reflect[3] = 0.154134;
	b11.reflect[4] = 0.028201;
	b11.reflect[5] = -0.014396;
	b11.reflect[6] = -0.095262;
	b11.reflect[7] = 0.083801;
	b11.reflect[8] = -0.006857;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	word.name = "right";
 
	db.words[0] = word;
 
	b0.reflect[0] = -0.902626;
	b0.reflect[1] = 0.638956;
	b0.reflect[2] = -0.020352;
	b0.reflect[3] = 0.059336;
	b0.reflect[4] = 0.031404;
	b0.reflect[5] = 0.060024;
	b0.reflect[6] = -0.031052;
	b0.reflect[7] = 0.095793;
	b0.reflect[8] = 0.095205;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.401518;
	b1.reflect[1] = 0.576899;
	b1.reflect[2] = -0.508998;
	b1.reflect[3] = 0.185359;
	b1.reflect[4] = 0.157308;
	b1.reflect[5] = 0.521100;
	b1.reflect[6] = 0.059371;
	b1.reflect[7] = 0.192473;
	b1.reflect[8] = 0.038284;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.539290;
	b2.reflect[1] = 0.532589;
	b2.reflect[2] = -0.446626;
	b2.reflect[3] = 0.269259;
	b2.reflect[4] = 0.270615;
	b2.reflect[5] = 0.539156;
	b2.reflect[6] = -0.149042;
	b2.reflect[7] = 0.238357;
	b2.reflect[8] = -0.130225;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.894357;
	b3.reflect[1] = 0.488314;
	b3.reflect[2] = -0.406502;
	b3.reflect[3] = 0.366652;
	b3.reflect[4] = 0.296349;
	b3.reflect[5] = 0.388228;
	b3.reflect[6] = -0.604210;
	b3.reflect[7] = 0.069104;
	b3.reflect[8] = -0.151063;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.748287;
	b4.reflect[1] = 0.360267;
	b4.reflect[2] = -0.294567;
	b4.reflect[3] = 0.459165;
	b4.reflect[4] = 0.061160;
	b4.reflect[5] = 0.112749;
	b4.reflect[6] = -0.257275;
	b4.reflect[7] = 0.019899;
	b4.reflect[8] = -0.098836;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.249236;
	b5.reflect[1] = 0.049155;
	b5.reflect[2] = 0.029762;
	b5.reflect[3] = -0.111367;
	b5.reflect[4] = -0.363067;
	b5.reflect[5] = 0.156024;
	b5.reflect[6] = -0.001351;
	b5.reflect[7] = 0.027194;
	b5.reflect[8] = -0.033422;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.228986;
	b6.reflect[1] = 0.156227;
	b6.reflect[2] = -0.063027;
	b6.reflect[3] = -0.015517;
	b6.reflect[4] = -0.246701;
	b6.reflect[5] = 0.122460;
	b6.reflect[6] = -0.139922;
	b6.reflect[7] = 0.103766;
	b6.reflect[8] = 0.061875;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.106369;
	b7.reflect[1] = 0.068192;
	b7.reflect[2] = -0.257519;
	b7.reflect[3] = -0.016317;
	b7.reflect[4] = -0.152256;
	b7.reflect[5] = 0.081309;
	b7.reflect[6] = -0.095982;
	b7.reflect[7] = 0.049328;
	b7.reflect[8] = 0.049209;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.373237;
	b8.reflect[1] = 0.276081;
	b8.reflect[2] = -0.249082;
	b8.reflect[3] = 0.279931;
	b8.reflect[4] = 0.163043;
	b8.reflect[5] = 0.243495;
	b8.reflect[6] = -0.186187;
	b8.reflect[7] = 0.126928;
	b8.reflect[8] = -0.129027;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.135884;
	b9.reflect[1] = 0.118782;
	b9.reflect[2] = -0.114711;
	b9.reflect[3] = 0.103717;
	b9.reflect[4] = 0.071040;
	b9.reflect[5] = 0.125190;
	b9.reflect[6] = -0.065123;
	b9.reflect[7] = 0.057659;
	b9.reflect[8] = -0.005259;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.484308;
	b0.reflect[1] = 0.298220;
	b0.reflect[2] = -0.311603;
	b0.reflect[3] = 0.140886;
	b0.reflect[4] = 0.230661;
	b0.reflect[5] = 0.048802;
	b0.reflect[6] = 0.150540;
	b0.reflect[7] = 0.043761;
	b0.reflect[8] = -0.017910;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.408220;
	b1.reflect[1] = 0.569667;
	b1.reflect[2] = -0.550851;
	b1.reflect[3] = 0.279118;
	b1.reflect[4] = 0.223075;
	b1.reflect[5] = 0.499214;
	b1.reflect[6] = 0.152041;
	b1.reflect[7] = 0.062779;
	b1.reflect[8] = -0.042087;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.490924;
	b2.reflect[1] = 0.549391;
	b2.reflect[2] = -0.512399;
	b2.reflect[3] = 0.322164;
	b2.reflect[4] = 0.361926;
	b2.reflect[5] = 0.565181;
	b2.reflect[6] = -0.057829;
	b2.reflect[7] = 0.201093;
	b2.reflect[8] = -0.238907;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.918195;
	b3.reflect[1] = 0.494736;
	b3.reflect[2] = -0.356421;
	b3.reflect[3] = 0.437099;
	b3.reflect[4] = 0.222193;
	b3.reflect[5] = 0.309438;
	b3.reflect[6] = -0.540732;
	b3.reflect[7] = 0.179353;
	b3.reflect[8] = -0.028278;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.611443;
	b4.reflect[1] = 0.439582;
	b4.reflect[2] = -0.197407;
	b4.reflect[3] = 0.009171;
	b4.reflect[4] = 0.086548;
	b4.reflect[5] = 0.118347;
	b4.reflect[6] = -0.074465;
	b4.reflect[7] = 0.205022;
	b4.reflect[8] = 0.045188;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.244728;
	b5.reflect[1] = 0.373795;
	b5.reflect[2] = -0.001695;
	b5.reflect[3] = -0.093118;
	b5.reflect[4] = -0.190415;
	b5.reflect[5] = -0.191666;
	b5.reflect[6] = 0.000097;
	b5.reflect[7] = 0.180896;
	b5.reflect[8] = 0.014818;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.199548;
	b6.reflect[1] = 0.221334;
	b6.reflect[2] = -0.043672;
	b6.reflect[3] = -0.167139;
	b6.reflect[4] = -0.105934;
	b6.reflect[5] = -0.109511;
	b6.reflect[6] = 0.067827;
	b6.reflect[7] = 0.090562;
	b6.reflect[8] = 0.002528;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.000255;
	b7.reflect[1] = 0.188952;
	b7.reflect[2] = -0.141758;
	b7.reflect[3] = -0.056591;
	b7.reflect[4] = 0.042079;
	b7.reflect[5] = 0.084386;
	b7.reflect[6] = 0.042143;
	b7.reflect[7] = 0.093397;
	b7.reflect[8] = -0.014967;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.256837;
	b8.reflect[1] = 0.287400;
	b8.reflect[2] = -0.304777;
	b8.reflect[3] = 0.248525;
	b8.reflect[4] = 0.215827;
	b8.reflect[5] = 0.327111;
	b8.reflect[6] = -0.118230;
	b8.reflect[7] = 0.101619;
	b8.reflect[8] = -0.049666;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.137227;
	b9.reflect[1] = 0.135359;
	b9.reflect[2] = -0.114844;
	b9.reflect[3] = 0.102074;
	b9.reflect[4] = 0.075456;
	b9.reflect[5] = 0.146115;
	b9.reflect[6] = -0.044686;
	b9.reflect[7] = 0.021944;
	b9.reflect[8] = -0.036559;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	word.name = "left";
 
	db.words[1] = word;
 
	*current_db = db; 
	return; 
} 
