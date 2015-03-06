#include "load_db.h" 

// word version block reflec

const float pm reflec0000[N_REFLEC] = {0,1,2,3,4,5,6,7,8}; 
const float pm energy0000 = -1;
const block_t pm b000 ={reflec0000, energy0000};
// SUBSET_LENGTH = 12 st  
const version_t pm version00[SUBSET_LENGTH] = {b000, b001..., b0011}; // ett ord
// pss N_VERSIONS = 12 liknande
const word_t pm word0[N_VERSION] = {version00, ..., version011}; 
// pss N_WORDS = 2
const db_t pm db[N_WORDS] ={word0, word1};


void load_db(db_t* current_db){

	 
	version_t version; 
	word_t word; 
	db_t db; 
	b0.reflect[0] = -0.709548;
	b0.reflect[1] = 0.467087;
	b0.reflect[2] = -0.435355;
	b0.reflect[3] = 0.212454;
	b0.reflect[4] = 0.063060;
	b0.reflect[5] = 0.269451;
	b0.reflect[6] = -0.047524;
	b0.reflect[7] = -0.216151;
	b0.reflect[8] = 0.107158;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.579143;
	b1.reflect[1] = 0.531212;
	b1.reflect[2] = -0.443361;
	b1.reflect[3] = 0.192730;
	b1.reflect[4] = 0.094717;
	b1.reflect[5] = 0.377796;
	b1.reflect[6] = 0.205421;
	b1.reflect[7] = -0.375356;
	b1.reflect[8] = -0.020554;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.504940;
	b2.reflect[1] = 0.241218;
	b2.reflect[2] = -0.316909;
	b2.reflect[3] = 0.324717;
	b2.reflect[4] = -0.046893;
	b2.reflect[5] = 0.240315;
	b2.reflect[6] = -0.014368;
	b2.reflect[7] = -0.148290;
	b2.reflect[8] = 0.049764;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.375329;
	b3.reflect[1] = 0.022996;
	b3.reflect[2] = -0.276478;
	b3.reflect[3] = 0.360840;
	b3.reflect[4] = 0.162646;
	b3.reflect[5] = 0.435206;
	b3.reflect[6] = -0.183103;
	b3.reflect[7] = -0.024053;
	b3.reflect[8] = -0.102923;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.328463;
	b4.reflect[1] = 0.053808;
	b4.reflect[2] = -0.222984;
	b4.reflect[3] = 0.126447;
	b4.reflect[4] = 0.005442;
	b4.reflect[5] = 0.290692;
	b4.reflect[6] = -0.033472;
	b4.reflect[7] = -0.019925;
	b4.reflect[8] = -0.103381;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.189753;
	b5.reflect[1] = 0.075317;
	b5.reflect[2] = -0.177806;
	b5.reflect[3] = -0.009187;
	b5.reflect[4] = -0.173021;
	b5.reflect[5] = 0.055208;
	b5.reflect[6] = -0.053886;
	b5.reflect[7] = 0.218544;
	b5.reflect[8] = -0.034417;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.228114;
	b6.reflect[1] = -0.013763;
	b6.reflect[2] = -0.099859;
	b6.reflect[3] = -0.010244;
	b6.reflect[4] = -0.027089;
	b6.reflect[5] = 0.082260;
	b6.reflect[6] = -0.012518;
	b6.reflect[7] = 0.046099;
	b6.reflect[8] = -0.028283;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.127828;
	b7.reflect[1] = -0.005444;
	b7.reflect[2] = -0.020909;
	b7.reflect[3] = 0.020793;
	b7.reflect[4] = -0.003476;
	b7.reflect[5] = 0.022792;
	b7.reflect[6] = 0.009909;
	b7.reflect[7] = -0.004213;
	b7.reflect[8] = 0.005407;
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
 
	b12.reflect[0] = -0.558362;
	b0.reflect[1] = 0.541270;
	b0.reflect[2] = -0.351384;
	b0.reflect[3] = 0.185252;
	b0.reflect[4] = -0.099299;
	b0.reflect[5] = 0.476021;
	b0.reflect[6] = -0.185498;
	b0.reflect[7] = -0.162806;
	b0.reflect[8] = 0.115175;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.572681;
	b1.reflect[1] = 0.602865;
	b1.reflect[2] = -0.378253;
	b1.reflect[3] = 0.204814;
	b1.reflect[4] = 0.019326;
	b1.reflect[5] = 0.535032;
	b1.reflect[6] = -0.096559;
	b1.reflect[7] = -0.267092;
	b1.reflect[8] = 0.071494;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.764283;
	b2.reflect[1] = 0.483900;
	b2.reflect[2] = -0.357724;
	b2.reflect[3] = 0.257141;
	b2.reflect[4] = -0.003438;
	b2.reflect[5] = 0.512762;
	b2.reflect[6] = -0.207922;
	b2.reflect[7] = -0.142694;
	b2.reflect[8] = 0.119461;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.344866;
	b3.reflect[1] = -0.033241;
	b3.reflect[2] = -0.441297;
	b3.reflect[3] = 0.451703;
	b3.reflect[4] = -0.002597;
	b3.reflect[5] = 0.312283;
	b3.reflect[6] = -0.151708;
	b3.reflect[7] = 0.077015;
	b3.reflect[8] = -0.037622;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.427548;
	b4.reflect[1] = 0.110188;
	b4.reflect[2] = -0.488176;
	b4.reflect[3] = 0.229700;
	b4.reflect[4] = 0.041780;
	b4.reflect[5] = 0.582102;
	b4.reflect[6] = -0.323484;
	b4.reflect[7] = 0.031169;
	b4.reflect[8] = -0.165416;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.378550;
	b5.reflect[1] = 0.030771;
	b5.reflect[2] = -0.519658;
	b5.reflect[3] = 0.366119;
	b5.reflect[4] = 0.088263;
	b5.reflect[5] = 0.463151;
	b5.reflect[6] = -0.275444;
	b5.reflect[7] = 0.050205;
	b5.reflect[8] = -0.107552;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.638260;
	b6.reflect[1] = -0.211840;
	b6.reflect[2] = -0.381759;
	b6.reflect[3] = 0.309270;
	b6.reflect[4] = -0.062567;
	b6.reflect[5] = 0.479391;
	b6.reflect[6] = 0.080705;
	b6.reflect[7] = 0.133156;
	b6.reflect[8] = -0.221353;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.832308;
	b7.reflect[1] = 0.010799;
	b7.reflect[2] = -0.371061;
	b7.reflect[3] = 0.122160;
	b7.reflect[4] = -0.046907;
	b7.reflect[5] = 0.493125;
	b7.reflect[6] = 0.181419;
	b7.reflect[7] = 0.071731;
	b7.reflect[8] = -0.172586;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.914204;
	b8.reflect[1] = 0.007219;
	b8.reflect[2] = -0.115452;
	b8.reflect[3] = 0.229912;
	b8.reflect[4] = 0.097000;
	b8.reflect[5] = 0.328428;
	b8.reflect[6] = 0.014699;
	b8.reflect[7] = 0.077899;
	b8.reflect[8] = 0.014147;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.836959;
	b9.reflect[1] = -0.149149;
	b9.reflect[2] = -0.236671;
	b9.reflect[3] = 0.264474;
	b9.reflect[4] = -0.028243;
	b9.reflect[5] = 0.203589;
	b9.reflect[6] = 0.062829;
	b9.reflect[7] = 0.055109;
	b9.reflect[8] = -0.032789;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.758027;
	b10.reflect[1] = -0.038024;
	b10.reflect[2] = -0.094562;
	b10.reflect[3] = 0.115278;
	b10.reflect[4] = 0.055455;
	b10.reflect[5] = 0.141397;
	b10.reflect[6] = -0.020119;
	b10.reflect[7] = 0.102388;
	b10.reflect[8] = 0.076520;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.626089;
	b11.reflect[1] = -0.068638;
	b11.reflect[2] = -0.098286;
	b11.reflect[3] = 0.166975;
	b11.reflect[4] = 0.024058;
	b11.reflect[5] = 0.080452;
	b11.reflect[6] = -0.003198;
	b11.reflect[7] = 0.057778;
	b11.reflect[8] = 0.060277;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.701005;
	b0.reflect[1] = 0.409986;
	b0.reflect[2] = -0.212436;
	b0.reflect[3] = 0.271191;
	b0.reflect[4] = -0.231541;
	b0.reflect[5] = 0.367969;
	b0.reflect[6] = -0.198983;
	b0.reflect[7] = -0.199825;
	b0.reflect[8] = -0.034453;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.696705;
	b1.reflect[1] = 0.505549;
	b1.reflect[2] = -0.204733;
	b1.reflect[3] = 0.263673;
	b1.reflect[4] = -0.118524;
	b1.reflect[5] = 0.306604;
	b1.reflect[6] = -0.148110;
	b1.reflect[7] = -0.246455;
	b1.reflect[8] = -0.051406;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.592652;
	b2.reflect[1] = 0.567102;
	b2.reflect[2] = -0.278119;
	b2.reflect[3] = 0.223483;
	b2.reflect[4] = 0.014007;
	b2.reflect[5] = 0.390187;
	b2.reflect[6] = -0.063027;
	b2.reflect[7] = -0.320816;
	b2.reflect[8] = 0.079213;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.529747;
	b3.reflect[1] = 0.580873;
	b3.reflect[2] = -0.344778;
	b3.reflect[3] = 0.161813;
	b3.reflect[4] = -0.097803;
	b3.reflect[5] = 0.493081;
	b3.reflect[6] = -0.066283;
	b3.reflect[7] = -0.229284;
	b3.reflect[8] = 0.037274;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.574709;
	b4.reflect[1] = 0.576636;
	b4.reflect[2] = -0.358221;
	b4.reflect[3] = 0.195010;
	b4.reflect[4] = 0.071831;
	b4.reflect[5] = 0.471783;
	b4.reflect[6] = -0.033984;
	b4.reflect[7] = -0.388419;
	b4.reflect[8] = 0.043318;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.606851;
	b5.reflect[1] = 0.601419;
	b5.reflect[2] = -0.338088;
	b5.reflect[3] = 0.275051;
	b5.reflect[4] = 0.077779;
	b5.reflect[5] = 0.581192;
	b5.reflect[6] = -0.119287;
	b5.reflect[7] = -0.311683;
	b5.reflect[8] = -0.021692;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.554734;
	b6.reflect[1] = 0.635109;
	b6.reflect[2] = -0.401113;
	b6.reflect[3] = 0.195044;
	b6.reflect[4] = 0.107802;
	b6.reflect[5] = 0.583249;
	b6.reflect[6] = -0.034815;
	b6.reflect[7] = -0.298778;
	b6.reflect[8] = 0.016254;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.606784;
	b7.reflect[1] = 0.541271;
	b7.reflect[2] = -0.299513;
	b7.reflect[3] = 0.317240;
	b7.reflect[4] = 0.000395;
	b7.reflect[5] = 0.523518;
	b7.reflect[6] = -0.035087;
	b7.reflect[7] = -0.285333;
	b7.reflect[8] = 0.133404;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.607506;
	b8.reflect[1] = 0.537990;
	b8.reflect[2] = -0.265430;
	b8.reflect[3] = 0.296697;
	b8.reflect[4] = -0.073378;
	b8.reflect[5] = 0.604336;
	b8.reflect[6] = -0.024000;
	b8.reflect[7] = -0.307266;
	b8.reflect[8] = 0.075745;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.564269;
	b9.reflect[1] = 0.563908;
	b9.reflect[2] = -0.399433;
	b9.reflect[3] = 0.152005;
	b9.reflect[4] = 0.013900;
	b9.reflect[5] = 0.500832;
	b9.reflect[6] = -0.046222;
	b9.reflect[7] = -0.358598;
	b9.reflect[8] = 0.137027;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.532195;
	b10.reflect[1] = 0.569618;
	b10.reflect[2] = -0.404249;
	b10.reflect[3] = 0.103262;
	b10.reflect[4] = -0.073058;
	b10.reflect[5] = 0.505585;
	b10.reflect[6] = -0.094085;
	b10.reflect[7] = -0.348500;
	b10.reflect[8] = 0.121309;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.651649;
	b0.reflect[1] = 0.440952;
	b0.reflect[2] = -0.355127;
	b0.reflect[3] = 0.226911;
	b0.reflect[4] = -0.192819;
	b0.reflect[5] = 0.541373;
	b0.reflect[6] = -0.231939;
	b0.reflect[7] = -0.200191;
	b0.reflect[8] = 0.046537;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.560864;
	b1.reflect[1] = 0.526408;
	b1.reflect[2] = -0.357897;
	b1.reflect[3] = 0.206702;
	b1.reflect[4] = -0.271804;
	b1.reflect[5] = 0.573738;
	b1.reflect[6] = -0.178834;
	b1.reflect[7] = -0.217776;
	b1.reflect[8] = 0.027262;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.750094;
	b2.reflect[1] = 0.376447;
	b2.reflect[2] = -0.324549;
	b2.reflect[3] = 0.263834;
	b2.reflect[4] = -0.179163;
	b2.reflect[5] = 0.497521;
	b2.reflect[6] = -0.205873;
	b2.reflect[7] = -0.163170;
	b2.reflect[8] = 0.091352;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.360292;
	b3.reflect[1] = 0.349542;
	b3.reflect[2] = -0.540756;
	b3.reflect[3] = 0.225385;
	b3.reflect[4] = -0.129819;
	b3.reflect[5] = 0.249339;
	b3.reflect[6] = -0.109809;
	b3.reflect[7] = 0.008204;
	b3.reflect[8] = -0.072557;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.649616;
	b4.reflect[1] = -0.031078;
	b4.reflect[2] = -0.412936;
	b4.reflect[3] = 0.621859;
	b4.reflect[4] = 0.209044;
	b4.reflect[5] = 0.373239;
	b4.reflect[6] = -0.210550;
	b4.reflect[7] = 0.066435;
	b4.reflect[8] = -0.093354;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.584218;
	b5.reflect[1] = 0.220631;
	b5.reflect[2] = -0.379606;
	b5.reflect[3] = 0.432129;
	b5.reflect[4] = 0.113487;
	b5.reflect[5] = 0.572546;
	b5.reflect[6] = -0.343483;
	b5.reflect[7] = -0.135340;
	b5.reflect[8] = -0.039207;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.548953;
	b6.reflect[1] = 0.008518;
	b6.reflect[2] = -0.183665;
	b6.reflect[3] = 0.316834;
	b6.reflect[4] = 0.002671;
	b6.reflect[5] = 0.284968;
	b6.reflect[6] = -0.084812;
	b6.reflect[7] = -0.137742;
	b6.reflect[8] = -0.124696;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.208861;
	b7.reflect[1] = 0.095841;
	b7.reflect[2] = -0.443175;
	b7.reflect[3] = -0.109948;
	b7.reflect[4] = -0.008733;
	b7.reflect[5] = 0.295570;
	b7.reflect[6] = -0.127373;
	b7.reflect[7] = 0.125699;
	b7.reflect[8] = -0.103822;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.076070;
	b8.reflect[1] = -0.034174;
	b8.reflect[2] = -0.207671;
	b8.reflect[3] = 0.065078;
	b8.reflect[4] = -0.183097;
	b8.reflect[5] = 0.096447;
	b8.reflect[6] = 0.020914;
	b8.reflect[7] = 0.103244;
	b8.reflect[8] = -0.135640;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.155650;
	b9.reflect[1] = -0.033915;
	b9.reflect[2] = -0.080371;
	b9.reflect[3] = 0.025303;
	b9.reflect[4] = -0.043345;
	b9.reflect[5] = 0.109626;
	b9.reflect[6] = 0.004511;
	b9.reflect[7] = -0.003465;
	b9.reflect[8] = -0.010510;
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
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0;
	b9.reflect[1] = 0;
	b9.reflect[2] = 0;
	b9.reflect[3] = 0;
	b9.reflect[4] = 0;
	b9.reflect[5] = 0;
	b9.reflect[6] = 0;
	b9.reflect[7] = 0;
	b9.reflect[8] = 0;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0;
	b10.reflect[1] = 0;
	b10.reflect[2] = 0;
	b10.reflect[3] = 0;
	b10.reflect[4] = 0;
	b10.reflect[5] = 0;
	b10.reflect[6] = 0;
	b10.reflect[7] = 0;
	b10.reflect[8] = 0;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.593758;
	b0.reflect[1] = 0.264215;
	b0.reflect[2] = -0.155160;
	b0.reflect[3] = 0.307028;
	b0.reflect[4] = -0.314772;
	b0.reflect[5] = 0.549002;
	b0.reflect[6] = -0.326439;
	b0.reflect[7] = -0.123942;
	b0.reflect[8] = 0.513010;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.756514;
	b1.reflect[1] = 0.530446;
	b1.reflect[2] = -0.221025;
	b1.reflect[3] = 0.110178;
	b1.reflect[4] = -0.088908;
	b1.reflect[5] = 0.340427;
	b1.reflect[6] = -0.279591;
	b1.reflect[7] = -0.056602;
	b1.reflect[8] = 0.519273;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.789674;
	b2.reflect[1] = 0.455695;
	b2.reflect[2] = -0.188612;
	b2.reflect[3] = 0.213080;
	b2.reflect[4] = -0.222224;
	b2.reflect[5] = 0.339094;
	b2.reflect[6] = -0.254711;
	b2.reflect[7] = -0.102574;
	b2.reflect[8] = 0.416860;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.635045;
	b3.reflect[1] = 0.376692;
	b3.reflect[2] = -0.236299;
	b3.reflect[3] = 0.208499;
	b3.reflect[4] = -0.340103;
	b3.reflect[5] = 0.555096;
	b3.reflect[6] = -0.354187;
	b3.reflect[7] = -0.263696;
	b3.reflect[8] = 0.140275;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.712614;
	b4.reflect[1] = 0.333063;
	b4.reflect[2] = -0.519519;
	b4.reflect[3] = 0.038812;
	b4.reflect[4] = -0.136816;
	b4.reflect[5] = 0.614269;
	b4.reflect[6] = -0.160322;
	b4.reflect[7] = -0.168520;
	b4.reflect[8] = 0.280965;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.823828;
	b5.reflect[1] = 0.305012;
	b5.reflect[2] = -0.284685;
	b5.reflect[3] = 0.234925;
	b5.reflect[4] = -0.211868;
	b5.reflect[5] = 0.591993;
	b5.reflect[6] = -0.425834;
	b5.reflect[7] = 0.094166;
	b5.reflect[8] = 0.180510;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.844382;
	b6.reflect[1] = 0.440052;
	b6.reflect[2] = -0.349022;
	b6.reflect[3] = 0.242737;
	b6.reflect[4] = -0.120038;
	b6.reflect[5] = 0.318117;
	b6.reflect[6] = -0.128107;
	b6.reflect[7] = -0.029994;
	b6.reflect[8] = 0.260489;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.498266;
	b7.reflect[1] = -0.177807;
	b7.reflect[2] = -0.578723;
	b7.reflect[3] = 0.405838;
	b7.reflect[4] = -0.012468;
	b7.reflect[5] = 0.298534;
	b7.reflect[6] = 0.125389;
	b7.reflect[7] = 0.137022;
	b7.reflect[8] = 0.058305;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.138326;
	b8.reflect[1] = 0.008524;
	b8.reflect[2] = -0.752639;
	b8.reflect[3] = 0.536565;
	b8.reflect[4] = 0.183895;
	b8.reflect[5] = 0.537413;
	b8.reflect[6] = -0.193921;
	b8.reflect[7] = 0.058833;
	b8.reflect[8] = -0.003283;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.028827;
	b9.reflect[1] = 0.151042;
	b9.reflect[2] = -0.647063;
	b9.reflect[3] = 0.394735;
	b9.reflect[4] = 0.030420;
	b9.reflect[5] = 0.525646;
	b9.reflect[6] = -0.047203;
	b9.reflect[7] = -0.120922;
	b9.reflect[8] = 0.102985;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000300;
	b10.reflect[1] = 0.120743;
	b10.reflect[2] = -0.267328;
	b10.reflect[3] = 0.241027;
	b10.reflect[4] = -0.052304;
	b10.reflect[5] = 0.337799;
	b10.reflect[6] = -0.046671;
	b10.reflect[7] = -0.016697;
	b10.reflect[8] = 0.016443;
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
 
	word.versions[5] = version;
 
	b0.reflect[0] = -0.681094;
	b0.reflect[1] = 0.355116;
	b0.reflect[2] = -0.231563;
	b0.reflect[3] = 0.304362;
	b0.reflect[4] = -0.328897;
	b0.reflect[5] = 0.567234;
	b0.reflect[6] = -0.216357;
	b0.reflect[7] = -0.173296;
	b0.reflect[8] = 0.222143;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.612272;
	b1.reflect[1] = 0.348846;
	b1.reflect[2] = -0.403995;
	b1.reflect[3] = 0.141019;
	b1.reflect[4] = -0.242757;
	b1.reflect[5] = 0.589930;
	b1.reflect[6] = -0.154305;
	b1.reflect[7] = -0.209322;
	b1.reflect[8] = 0.034372;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.178711;
	b2.reflect[1] = 0.140000;
	b2.reflect[2] = -0.588888;
	b2.reflect[3] = 0.383787;
	b2.reflect[4] = 0.035897;
	b2.reflect[5] = 0.393281;
	b2.reflect[6] = -0.093586;
	b2.reflect[7] = 0.136346;
	b2.reflect[8] = -0.006035;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.096721;
	b3.reflect[1] = 0.165859;
	b3.reflect[2] = -0.471338;
	b3.reflect[3] = 0.320351;
	b3.reflect[4] = -0.195485;
	b3.reflect[5] = 0.547941;
	b3.reflect[6] = -0.051781;
	b3.reflect[7] = 0.046347;
	b3.reflect[8] = -0.010521;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.306360;
	b4.reflect[1] = 0.111342;
	b4.reflect[2] = -0.409982;
	b4.reflect[3] = 0.161846;
	b4.reflect[4] = -0.266594;
	b4.reflect[5] = 0.483066;
	b4.reflect[6] = 0.023359;
	b4.reflect[7] = 0.058276;
	b4.reflect[8] = -0.201060;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.272784;
	b5.reflect[1] = -0.091441;
	b5.reflect[2] = -0.435106;
	b5.reflect[3] = 0.180611;
	b5.reflect[4] = -0.276813;
	b5.reflect[5] = 0.338280;
	b5.reflect[6] = 0.052021;
	b5.reflect[7] = 0.176079;
	b5.reflect[8] = -0.274690;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.827132;
	b6.reflect[1] = -0.147372;
	b6.reflect[2] = -0.369038;
	b6.reflect[3] = 0.094828;
	b6.reflect[4] = -0.050114;
	b6.reflect[5] = 0.372494;
	b6.reflect[6] = 0.104925;
	b6.reflect[7] = 0.141660;
	b6.reflect[8] = -0.055331;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.904368;
	b7.reflect[1] = -0.163160;
	b7.reflect[2] = -0.241378;
	b7.reflect[3] = 0.179585;
	b7.reflect[4] = 0.036608;
	b7.reflect[5] = 0.215490;
	b7.reflect[6] = 0.060047;
	b7.reflect[7] = 0.190645;
	b7.reflect[8] = 0.108414;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.741759;
	b8.reflect[1] = -0.206893;
	b8.reflect[2] = -0.281226;
	b8.reflect[3] = 0.149847;
	b8.reflect[4] = 0.040526;
	b8.reflect[5] = 0.107986;
	b8.reflect[6] = 0.016439;
	b8.reflect[7] = 0.057872;
	b8.reflect[8] = 0.009629;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.644224;
	b9.reflect[1] = -0.139822;
	b9.reflect[2] = -0.127784;
	b9.reflect[3] = 0.130130;
	b9.reflect[4] = -0.002329;
	b9.reflect[5] = 0.080412;
	b9.reflect[6] = 0.003394;
	b9.reflect[7] = 0.077464;
	b9.reflect[8] = 0.025907;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.515970;
	b10.reflect[1] = -0.098889;
	b10.reflect[2] = -0.098632;
	b10.reflect[3] = 0.103702;
	b10.reflect[4] = -0.013124;
	b10.reflect[5] = 0.057619;
	b10.reflect[6] = 0.022332;
	b10.reflect[7] = 0.047413;
	b10.reflect[8] = 0.003765;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.382314;
	b11.reflect[1] = -0.118054;
	b11.reflect[2] = -0.079710;
	b11.reflect[3] = 0.067129;
	b11.reflect[4] = -0.009630;
	b11.reflect[5] = 0.079389;
	b11.reflect[6] = -0.018053;
	b11.reflect[7] = 0.087382;
	b11.reflect[8] = 0.029771;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[6] = version;
 
	b0.reflect[0] = -0.500667;
	b0.reflect[1] = 0.493419;
	b0.reflect[2] = -0.618568;
	b0.reflect[3] = 0.039489;
	b0.reflect[4] = -0.130618;
	b0.reflect[5] = 0.521822;
	b0.reflect[6] = -0.428597;
	b0.reflect[7] = -0.092594;
	b0.reflect[8] = 0.250466;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.454531;
	b1.reflect[1] = 0.526046;
	b1.reflect[2] = -0.522854;
	b1.reflect[3] = -0.048018;
	b1.reflect[4] = -0.164612;
	b1.reflect[5] = 0.566480;
	b1.reflect[6] = -0.235003;
	b1.reflect[7] = -0.428637;
	b1.reflect[8] = 0.195098;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.331577;
	b2.reflect[1] = 0.553963;
	b2.reflect[2] = -0.303591;
	b2.reflect[3] = -0.048190;
	b2.reflect[4] = -0.409026;
	b2.reflect[5] = 0.497020;
	b2.reflect[6] = 0.097750;
	b2.reflect[7] = -0.479762;
	b2.reflect[8] = 0.082671;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.325430;
	b3.reflect[1] = 0.612835;
	b3.reflect[2] = -0.292022;
	b3.reflect[3] = -0.023223;
	b3.reflect[4] = -0.371468;
	b3.reflect[5] = 0.375600;
	b3.reflect[6] = 0.179365;
	b3.reflect[7] = -0.428155;
	b3.reflect[8] = 0.063026;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.387021;
	b4.reflect[1] = 0.316413;
	b4.reflect[2] = -0.351660;
	b4.reflect[3] = 0.090490;
	b4.reflect[4] = -0.395911;
	b4.reflect[5] = 0.452880;
	b4.reflect[6] = 0.077483;
	b4.reflect[7] = -0.269183;
	b4.reflect[8] = -0.006268;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.806800;
	b5.reflect[1] = 0.226511;
	b5.reflect[2] = -0.322912;
	b5.reflect[3] = 0.298081;
	b5.reflect[4] = -0.069675;
	b5.reflect[5] = 0.475207;
	b5.reflect[6] = -0.141394;
	b5.reflect[7] = -0.274099;
	b5.reflect[8] = -0.023838;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.262547;
	b6.reflect[1] = 0.008842;
	b6.reflect[2] = -0.480536;
	b6.reflect[3] = 0.435561;
	b6.reflect[4] = -0.040515;
	b6.reflect[5] = 0.248691;
	b6.reflect[6] = 0.037581;
	b6.reflect[7] = 0.054296;
	b6.reflect[8] = -0.158624;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.131676;
	b7.reflect[1] = -0.155059;
	b7.reflect[2] = -0.730550;
	b7.reflect[3] = 0.509187;
	b7.reflect[4] = 0.241193;
	b7.reflect[5] = 0.582242;
	b7.reflect[6] = -0.225553;
	b7.reflect[7] = -0.039964;
	b7.reflect[8] = -0.207898;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.229399;
	b8.reflect[1] = -0.141727;
	b8.reflect[2] = -0.418167;
	b8.reflect[3] = 0.227988;
	b8.reflect[4] = 0.038730;
	b8.reflect[5] = 0.365077;
	b8.reflect[6] = -0.075978;
	b8.reflect[7] = 0.031814;
	b8.reflect[8] = -0.034488;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.138904;
	b9.reflect[1] = -0.033146;
	b9.reflect[2] = -0.159189;
	b9.reflect[3] = 0.115078;
	b9.reflect[4] = -0.095564;
	b9.reflect[5] = 0.180391;
	b9.reflect[6] = -0.052388;
	b9.reflect[7] = -0.020599;
	b9.reflect[8] = 0.001690;
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
 
	word.versions[7] = version;
 
	b0.reflect[0] = -0.534199;
	b0.reflect[1] = 0.526787;
	b0.reflect[2] = -0.296643;
	b0.reflect[3] = 0.133210;
	b0.reflect[4] = -0.345488;
	b0.reflect[5] = 0.504357;
	b0.reflect[6] = 0.014216;
	b0.reflect[7] = -0.326678;
	b0.reflect[8] = 0.182642;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.507258;
	b1.reflect[1] = 0.623818;
	b1.reflect[2] = -0.352559;
	b1.reflect[3] = 0.098441;
	b1.reflect[4] = -0.223920;
	b1.reflect[5] = 0.527093;
	b1.reflect[6] = 0.053237;
	b1.reflect[7] = -0.309302;
	b1.reflect[8] = 0.231337;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.455182;
	b2.reflect[1] = 0.692268;
	b2.reflect[2] = -0.411596;
	b2.reflect[3] = 0.118953;
	b2.reflect[4] = -0.131130;
	b2.reflect[5] = 0.553204;
	b2.reflect[6] = 0.069184;
	b2.reflect[7] = -0.324648;
	b2.reflect[8] = 0.216736;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.461129;
	b3.reflect[1] = 0.684516;
	b3.reflect[2] = -0.441830;
	b3.reflect[3] = 0.047018;
	b3.reflect[4] = -0.086151;
	b3.reflect[5] = 0.475759;
	b3.reflect[6] = 0.075802;
	b3.reflect[7] = -0.296203;
	b3.reflect[8] = 0.262502;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.562514;
	b4.reflect[1] = 0.352711;
	b4.reflect[2] = -0.342842;
	b4.reflect[3] = 0.213319;
	b4.reflect[4] = -0.189891;
	b4.reflect[5] = 0.513493;
	b4.reflect[6] = 0.075120;
	b4.reflect[7] = -0.231832;
	b4.reflect[8] = 0.064475;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.921952;
	b5.reflect[1] = 0.582469;
	b5.reflect[2] = -0.001585;
	b5.reflect[3] = 0.315499;
	b5.reflect[4] = -0.239389;
	b5.reflect[5] = 0.318531;
	b5.reflect[6] = -0.220486;
	b5.reflect[7] = -0.095123;
	b5.reflect[8] = 0.237254;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.610556;
	b6.reflect[1] = -0.150626;
	b6.reflect[2] = -0.405258;
	b6.reflect[3] = 0.685332;
	b6.reflect[4] = 0.092458;
	b6.reflect[5] = 0.194265;
	b6.reflect[6] = -0.212997;
	b6.reflect[7] = -0.090657;
	b6.reflect[8] = 0.010104;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.111740;
	b7.reflect[1] = -0.052387;
	b7.reflect[2] = -0.655540;
	b7.reflect[3] = 0.312020;
	b7.reflect[4] = 0.286490;
	b7.reflect[5] = 0.501225;
	b7.reflect[6] = 0.039513;
	b7.reflect[7] = -0.177567;
	b7.reflect[8] = 0.084459;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.069650;
	b8.reflect[1] = 0.024838;
	b8.reflect[2] = -0.368227;
	b8.reflect[3] = 0.197069;
	b8.reflect[4] = -0.011756;
	b8.reflect[5] = 0.306934;
	b8.reflect[6] = 0.044543;
	b8.reflect[7] = 0.003445;
	b8.reflect[8] = -0.032993;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.014689;
	b9.reflect[1] = 0.023156;
	b9.reflect[2] = -0.159723;
	b9.reflect[3] = 0.122403;
	b9.reflect[4] = -0.103832;
	b9.reflect[5] = 0.150442;
	b9.reflect[6] = -0.000616;
	b9.reflect[7] = 0.046001;
	b9.reflect[8] = -0.025464;
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
 
	word.versions[8] = version;
 
	b0.reflect[0] = -0.569128;
	b0.reflect[1] = 0.428688;
	b0.reflect[2] = -0.094406;
	b0.reflect[3] = 0.284128;
	b0.reflect[4] = -0.448526;
	b0.reflect[5] = 0.186437;
	b0.reflect[6] = 0.466647;
	b0.reflect[7] = 0.035496;
	b0.reflect[8] = -0.077974;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.714521;
	b1.reflect[1] = 0.541574;
	b1.reflect[2] = -0.097470;
	b1.reflect[3] = 0.189892;
	b1.reflect[4] = -0.388523;
	b1.reflect[5] = 0.413971;
	b1.reflect[6] = 0.453075;
	b1.reflect[7] = -0.118680;
	b1.reflect[8] = -0.048825;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.781704;
	b2.reflect[1] = 0.421126;
	b2.reflect[2] = 0.023447;
	b2.reflect[3] = 0.258523;
	b2.reflect[4] = -0.285501;
	b2.reflect[5] = 0.404090;
	b2.reflect[6] = 0.578902;
	b2.reflect[7] = -0.021271;
	b2.reflect[8] = -0.093548;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.708257;
	b3.reflect[1] = 0.171982;
	b3.reflect[2] = -0.102269;
	b3.reflect[3] = 0.418936;
	b3.reflect[4] = -0.233860;
	b3.reflect[5] = 0.307707;
	b3.reflect[6] = 0.604708;
	b3.reflect[7] = 0.334985;
	b3.reflect[8] = -0.126191;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.557718;
	b4.reflect[1] = 0.074892;
	b4.reflect[2] = -0.454888;
	b4.reflect[3] = 0.381199;
	b4.reflect[4] = -0.146804;
	b4.reflect[5] = 0.356922;
	b4.reflect[6] = 0.466395;
	b4.reflect[7] = 0.517942;
	b4.reflect[8] = -0.291909;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.764454;
	b5.reflect[1] = -0.006047;
	b5.reflect[2] = -0.439135;
	b5.reflect[3] = 0.394817;
	b5.reflect[4] = 0.235985;
	b5.reflect[5] = 0.274821;
	b5.reflect[6] = 0.096845;
	b5.reflect[7] = 0.202995;
	b5.reflect[8] = -0.310801;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.887218;
	b6.reflect[1] = 0.300380;
	b6.reflect[2] = -0.178579;
	b6.reflect[3] = 0.426173;
	b6.reflect[4] = 0.203451;
	b6.reflect[5] = 0.050955;
	b6.reflect[6] = 0.026204;
	b6.reflect[7] = 0.097329;
	b6.reflect[8] = -0.291315;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.663191;
	b7.reflect[1] = 0.234356;
	b7.reflect[2] = -0.475023;
	b7.reflect[3] = 0.058812;
	b7.reflect[4] = 0.159679;
	b7.reflect[5] = 0.557736;
	b7.reflect[6] = 0.140398;
	b7.reflect[7] = 0.385207;
	b7.reflect[8] = -0.297399;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.707862;
	b8.reflect[1] = 0.419560;
	b8.reflect[2] = -0.344798;
	b8.reflect[3] = 0.163553;
	b8.reflect[4] = -0.087348;
	b8.reflect[5] = 0.523187;
	b8.reflect[6] = 0.238901;
	b8.reflect[7] = 0.517304;
	b8.reflect[8] = -0.254377;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.785878;
	b9.reflect[1] = 0.541517;
	b9.reflect[2] = -0.199260;
	b9.reflect[3] = 0.402609;
	b9.reflect[4] = -0.242159;
	b9.reflect[5] = 0.447262;
	b9.reflect[6] = 0.315501;
	b9.reflect[7] = 0.471464;
	b9.reflect[8] = -0.085821;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.782657;
	b10.reflect[1] = 0.590834;
	b10.reflect[2] = -0.191144;
	b10.reflect[3] = 0.398262;
	b10.reflect[4] = -0.390305;
	b10.reflect[5] = 0.429806;
	b10.reflect[6] = 0.372631;
	b10.reflect[7] = 0.184708;
	b10.reflect[8] = 0.030784;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.789852;
	b11.reflect[1] = 0.670068;
	b11.reflect[2] = -0.190987;
	b11.reflect[3] = 0.325815;
	b11.reflect[4] = -0.332568;
	b11.reflect[5] = 0.314368;
	b11.reflect[6] = 0.475064;
	b11.reflect[7] = 0.091648;
	b11.reflect[8] = 0.019189;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[9] = version;
 
	b0.reflect[0] = -0.745895;
	b0.reflect[1] = 0.327943;
	b0.reflect[2] = -0.157522;
	b0.reflect[3] = 0.111197;
	b0.reflect[4] = -0.302136;
	b0.reflect[5] = 0.026689;
	b0.reflect[6] = 0.456069;
	b0.reflect[7] = -0.175885;
	b0.reflect[8] = -0.176035;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.547197;
	b1.reflect[1] = 0.278530;
	b1.reflect[2] = -0.080986;
	b1.reflect[3] = 0.305723;
	b1.reflect[4] = -0.334416;
	b1.reflect[5] = -0.052284;
	b1.reflect[6] = 0.590474;
	b1.reflect[7] = 0.131431;
	b1.reflect[8] = -0.212473;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.614639;
	b2.reflect[1] = 0.429979;
	b2.reflect[2] = -0.077627;
	b2.reflect[3] = 0.240052;
	b2.reflect[4] = -0.499717;
	b2.reflect[5] = 0.241457;
	b2.reflect[6] = 0.646330;
	b2.reflect[7] = 0.029172;
	b2.reflect[8] = -0.129607;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.616300;
	b3.reflect[1] = 0.347847;
	b3.reflect[2] = -0.171791;
	b3.reflect[3] = 0.319332;
	b3.reflect[4] = -0.531185;
	b3.reflect[5] = 0.383748;
	b3.reflect[6] = 0.620344;
	b3.reflect[7] = 0.052056;
	b3.reflect[8] = -0.061555;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.349843;
	b4.reflect[1] = 0.118893;
	b4.reflect[2] = -0.178603;
	b4.reflect[3] = 0.167483;
	b4.reflect[4] = -0.154679;
	b4.reflect[5] = 0.200269;
	b4.reflect[6] = 0.265352;
	b4.reflect[7] = 0.037277;
	b4.reflect[8] = -0.058945;
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
 
	word.versions[10] = version;
 
	b0.reflect[0] = -0.715894;
	b0.reflect[1] = 0.358576;
	b0.reflect[2] = -0.038105;
	b0.reflect[3] = 0.162509;
	b0.reflect[4] = -0.312276;
	b0.reflect[5] = 0.112973;
	b0.reflect[6] = 0.381505;
	b0.reflect[7] = -0.158021;
	b0.reflect[8] = 0.044451;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.657729;
	b1.reflect[1] = 0.520079;
	b1.reflect[2] = 0.129819;
	b1.reflect[3] = -0.011586;
	b1.reflect[4] = -0.145646;
	b1.reflect[5] = 0.015777;
	b1.reflect[6] = 0.751080;
	b1.reflect[7] = -0.055257;
	b1.reflect[8] = -0.162823;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.665096;
	b2.reflect[1] = 0.266238;
	b2.reflect[2] = 0.163290;
	b2.reflect[3] = 0.174626;
	b2.reflect[4] = -0.183126;
	b2.reflect[5] = -0.009670;
	b2.reflect[6] = 0.847272;
	b2.reflect[7] = -0.047095;
	b2.reflect[8] = -0.146316;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.680768;
	b3.reflect[1] = 0.006973;
	b3.reflect[2] = -0.067469;
	b3.reflect[3] = 0.504945;
	b3.reflect[4] = -0.100504;
	b3.reflect[5] = -0.018952;
	b3.reflect[6] = 0.792635;
	b3.reflect[7] = -0.001762;
	b3.reflect[8] = -0.090986;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.721678;
	b4.reflect[1] = -0.070447;
	b4.reflect[2] = -0.386063;
	b4.reflect[3] = 0.578236;
	b4.reflect[4] = 0.015769;
	b4.reflect[5] = 0.118924;
	b4.reflect[6] = 0.598552;
	b4.reflect[7] = 0.025588;
	b4.reflect[8] = -0.129248;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.870659;
	b5.reflect[1] = 0.118561;
	b5.reflect[2] = -0.307944;
	b5.reflect[3] = 0.650619;
	b5.reflect[4] = -0.042412;
	b5.reflect[5] = 0.252817;
	b5.reflect[6] = 0.336185;
	b5.reflect[7] = -0.032131;
	b5.reflect[8] = -0.223941;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.869725;
	b6.reflect[1] = 0.222804;
	b6.reflect[2] = -0.254927;
	b6.reflect[3] = 0.436885;
	b6.reflect[4] = 0.103213;
	b6.reflect[5] = 0.140392;
	b6.reflect[6] = 0.032331;
	b6.reflect[7] = 0.075974;
	b6.reflect[8] = -0.263044;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.745572;
	b7.reflect[1] = 0.309780;
	b7.reflect[2] = -0.380224;
	b7.reflect[3] = 0.257781;
	b7.reflect[4] = -0.020645;
	b7.reflect[5] = 0.418059;
	b7.reflect[6] = 0.233050;
	b7.reflect[7] = 0.583366;
	b7.reflect[8] = -0.141407;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.739021;
	b8.reflect[1] = 0.577287;
	b8.reflect[2] = -0.326128;
	b8.reflect[3] = 0.308478;
	b8.reflect[4] = -0.339937;
	b8.reflect[5] = 0.503524;
	b8.reflect[6] = 0.209303;
	b8.reflect[7] = 0.568357;
	b8.reflect[8] = -0.283421;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.809004;
	b9.reflect[1] = 0.786776;
	b9.reflect[2] = -0.413213;
	b9.reflect[3] = 0.223465;
	b9.reflect[4] = -0.182127;
	b9.reflect[5] = 0.685367;
	b9.reflect[6] = 0.149999;
	b9.reflect[7] = 0.375727;
	b9.reflect[8] = -0.218486;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.791581;
	b10.reflect[1] = 0.771475;
	b10.reflect[2] = -0.349150;
	b10.reflect[3] = 0.257099;
	b10.reflect[4] = -0.300936;
	b10.reflect[5] = 0.595081;
	b10.reflect[6] = 0.219849;
	b10.reflect[7] = 0.061948;
	b10.reflect[8] = -0.096311;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.740193;
	b11.reflect[1] = 0.425433;
	b11.reflect[2] = -0.259734;
	b11.reflect[3] = 0.488501;
	b11.reflect[4] = -0.478521;
	b11.reflect[5] = 0.396671;
	b11.reflect[6] = 0.106387;
	b11.reflect[7] = 0.297103;
	b11.reflect[8] = -0.305199;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[11] = version;
 
	word.name = "right";
 
	db.words[0] = word;
 
	b0.reflect[0] = -0.829639;
	b0.reflect[1] = -0.117953;
	b0.reflect[2] = -0.154491;
	b0.reflect[3] = 0.235716;
	b0.reflect[4] = 0.029038;
	b0.reflect[5] = 0.187732;
	b0.reflect[6] = 0.013591;
	b0.reflect[7] = 0.078886;
	b0.reflect[8] = 0.031569;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.850694;
	b1.reflect[1] = -0.108150;
	b1.reflect[2] = -0.092738;
	b1.reflect[3] = 0.164401;
	b1.reflect[4] = -0.008103;
	b1.reflect[5] = 0.099976;
	b1.reflect[6] = -0.009331;
	b1.reflect[7] = 0.087596;
	b1.reflect[8] = -0.039418;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.896043;
	b2.reflect[1] = -0.097023;
	b2.reflect[2] = -0.183786;
	b2.reflect[3] = 0.245662;
	b2.reflect[4] = 0.042467;
	b2.reflect[5] = 0.157670;
	b2.reflect[6] = -0.070928;
	b2.reflect[7] = 0.055973;
	b2.reflect[8] = 0.041197;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.787154;
	b3.reflect[1] = -0.065623;
	b3.reflect[2] = -0.133405;
	b3.reflect[3] = 0.117426;
	b3.reflect[4] = 0.065661;
	b3.reflect[5] = 0.167901;
	b3.reflect[6] = 0.004765;
	b3.reflect[7] = 0.010042;
	b3.reflect[8] = -0.111682;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.668605;
	b4.reflect[1] = -0.078734;
	b4.reflect[2] = -0.089612;
	b4.reflect[3] = 0.185068;
	b4.reflect[4] = -0.011819;
	b4.reflect[5] = 0.110831;
	b4.reflect[6] = 0.038921;
	b4.reflect[7] = 0.058490;
	b4.reflect[8] = -0.016096;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.530561;
	b5.reflect[1] = -0.080517;
	b5.reflect[2] = -0.117084;
	b5.reflect[3] = 0.087926;
	b5.reflect[4] = 0.035997;
	b5.reflect[5] = 0.092426;
	b5.reflect[6] = -0.003540;
	b5.reflect[7] = 0.090287;
	b5.reflect[8] = 0.010532;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.393218;
	b6.reflect[1] = -0.039498;
	b6.reflect[2] = -0.051930;
	b6.reflect[3] = 0.091143;
	b6.reflect[4] = -0.044320;
	b6.reflect[5] = 0.032748;
	b6.reflect[6] = -0.027933;
	b6.reflect[7] = 0.102456;
	b6.reflect[8] = 0.013511;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.252566;
	b7.reflect[1] = -0.023339;
	b7.reflect[2] = -0.088950;
	b7.reflect[3] = 0.038792;
	b7.reflect[4] = -0.004817;
	b7.reflect[5] = 0.051667;
	b7.reflect[6] = -0.034415;
	b7.reflect[7] = 0.037750;
	b7.reflect[8] = -0.022763;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.134544;
	b8.reflect[1] = 0.010701;
	b8.reflect[2] = 0.007953;
	b8.reflect[3] = 0.048005;
	b8.reflect[4] = 0.027714;
	b8.reflect[5] = 0.038578;
	b8.reflect[6] = 0.000205;
	b8.reflect[7] = 0.035826;
	b8.reflect[8] = -0.015622;
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
 
	b0.reflect[0] = -0.628733;
	b0.reflect[1] = 0.325416;
	b0.reflect[2] = -0.526303;
	b0.reflect[3] = 0.284939;
	b0.reflect[4] = 0.218671;
	b0.reflect[5] = 0.297338;
	b0.reflect[6] = -0.297278;
	b0.reflect[7] = 0.029655;
	b0.reflect[8] = -0.207106;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.947230;
	b1.reflect[1] = 0.417303;
	b1.reflect[2] = -0.132205;
	b1.reflect[3] = 0.326867;
	b1.reflect[4] = 0.333258;
	b1.reflect[5] = 0.426519;
	b1.reflect[6] = -0.427836;
	b1.reflect[7] = 0.138493;
	b1.reflect[8] = -0.293036;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.971331;
	b2.reflect[1] = 0.537267;
	b2.reflect[2] = 0.081146;
	b2.reflect[3] = 0.365216;
	b2.reflect[4] = 0.207240;
	b2.reflect[5] = 0.391154;
	b2.reflect[6] = -0.402856;
	b2.reflect[7] = 0.006438;
	b2.reflect[8] = -0.095921;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.838954;
	b3.reflect[1] = -0.033876;
	b3.reflect[2] = -0.344607;
	b3.reflect[3] = 0.116095;
	b3.reflect[4] = 0.271929;
	b3.reflect[5] = 0.326813;
	b3.reflect[6] = 0.058593;
	b3.reflect[7] = 0.052375;
	b3.reflect[8] = -0.059874;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.898719;
	b4.reflect[1] = -0.086562;
	b4.reflect[2] = -0.252675;
	b4.reflect[3] = 0.171621;
	b4.reflect[4] = 0.016274;
	b4.reflect[5] = 0.202466;
	b4.reflect[6] = -0.011314;
	b4.reflect[7] = 0.078592;
	b4.reflect[8] = -0.040541;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.791988;
	b5.reflect[1] = 0.117415;
	b5.reflect[2] = -0.206263;
	b5.reflect[3] = 0.163796;
	b5.reflect[4] = 0.099693;
	b5.reflect[5] = 0.279304;
	b5.reflect[6] = -0.092535;
	b5.reflect[7] = 0.024752;
	b5.reflect[8] = -0.169925;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.500700;
	b6.reflect[1] = 0.404752;
	b6.reflect[2] = -0.402117;
	b6.reflect[3] = 0.228285;
	b6.reflect[4] = 0.162644;
	b6.reflect[5] = 0.348037;
	b6.reflect[6] = -0.340466;
	b6.reflect[7] = 0.092367;
	b6.reflect[8] = -0.126170;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.175417;
	b7.reflect[1] = -0.419667;
	b7.reflect[2] = -0.314044;
	b7.reflect[3] = 0.231870;
	b7.reflect[4] = -0.016440;
	b7.reflect[5] = 0.197787;
	b7.reflect[6] = -0.048343;
	b7.reflect[7] = 0.077230;
	b7.reflect[8] = -0.100070;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.310666;
	b8.reflect[1] = -0.132332;
	b8.reflect[2] = -0.308363;
	b8.reflect[3] = 0.023795;
	b8.reflect[4] = -0.115749;
	b8.reflect[5] = 0.032968;
	b8.reflect[6] = 0.006494;
	b8.reflect[7] = 0.168475;
	b8.reflect[8] = -0.027670;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.155299;
	b9.reflect[1] = -0.125334;
	b9.reflect[2] = -0.106339;
	b9.reflect[3] = 0.038752;
	b9.reflect[4] = -0.040595;
	b9.reflect[5] = 0.042317;
	b9.reflect[6] = 0.016785;
	b9.reflect[7] = 0.065665;
	b9.reflect[8] = -0.049494;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.104693;
	b10.reflect[1] = -0.074101;
	b10.reflect[2] = -0.011520;
	b10.reflect[3] = 0.028105;
	b10.reflect[4] = -0.029034;
	b10.reflect[5] = 0.049733;
	b10.reflect[6] = -0.005853;
	b10.reflect[7] = 0.034668;
	b10.reflect[8] = -0.003464;
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
 
	b0.reflect[0] = -0.438857;
	b0.reflect[1] = 0.312405;
	b0.reflect[2] = -0.658354;
	b0.reflect[3] = 0.176027;
	b0.reflect[4] = 0.211187;
	b0.reflect[5] = 0.484180;
	b0.reflect[6] = -0.253985;
	b0.reflect[7] = -0.219672;
	b0.reflect[8] = 0.036119;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.373971;
	b1.reflect[1] = 0.357916;
	b1.reflect[2] = -0.700736;
	b1.reflect[3] = 0.154468;
	b1.reflect[4] = 0.194593;
	b1.reflect[5] = 0.512835;
	b1.reflect[6] = -0.347722;
	b1.reflect[7] = -0.160599;
	b1.reflect[8] = -0.052780;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.386379;
	b2.reflect[1] = 0.318159;
	b2.reflect[2] = -0.636204;
	b2.reflect[3] = 0.183676;
	b2.reflect[4] = 0.165984;
	b2.reflect[5] = 0.540373;
	b2.reflect[6] = -0.416174;
	b2.reflect[7] = -0.083715;
	b2.reflect[8] = -0.144614;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.412357;
	b3.reflect[1] = 0.334927;
	b3.reflect[2] = -0.624806;
	b3.reflect[3] = 0.253210;
	b3.reflect[4] = 0.259952;
	b3.reflect[5] = 0.422371;
	b3.reflect[6] = -0.322407;
	b3.reflect[7] = -0.130853;
	b3.reflect[8] = -0.128657;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.416210;
	b4.reflect[1] = 0.311489;
	b4.reflect[2] = -0.596408;
	b4.reflect[3] = 0.229918;
	b4.reflect[4] = 0.218449;
	b4.reflect[5] = 0.487482;
	b4.reflect[6] = -0.419510;
	b4.reflect[7] = -0.111368;
	b4.reflect[8] = -0.127965;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.417781;
	b5.reflect[1] = 0.303775;
	b5.reflect[2] = -0.612252;
	b5.reflect[3] = 0.216924;
	b5.reflect[4] = 0.215030;
	b5.reflect[5] = 0.490053;
	b5.reflect[6] = -0.528011;
	b5.reflect[7] = -0.028378;
	b5.reflect[8] = -0.122781;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.454967;
	b6.reflect[1] = 0.309643;
	b6.reflect[2] = -0.621246;
	b6.reflect[3] = 0.239788;
	b6.reflect[4] = 0.286430;
	b6.reflect[5] = 0.397817;
	b6.reflect[6] = -0.505906;
	b6.reflect[7] = -0.096073;
	b6.reflect[8] = -0.070048;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.489213;
	b7.reflect[1] = 0.334522;
	b7.reflect[2] = -0.679205;
	b7.reflect[3] = 0.279253;
	b7.reflect[4] = 0.386817;
	b7.reflect[5] = 0.289580;
	b7.reflect[6] = -0.562655;
	b7.reflect[7] = 0.081874;
	b7.reflect[8] = -0.203758;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.625166;
	b8.reflect[1] = 0.278571;
	b8.reflect[2] = -0.617795;
	b8.reflect[3] = 0.334587;
	b8.reflect[4] = 0.286553;
	b8.reflect[5] = 0.258734;
	b8.reflect[6] = -0.491007;
	b8.reflect[7] = 0.057466;
	b8.reflect[8] = -0.164775;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.854147;
	b9.reflect[1] = 0.307344;
	b9.reflect[2] = -0.299294;
	b9.reflect[3] = 0.410934;
	b9.reflect[4] = -0.035888;
	b9.reflect[5] = 0.262846;
	b9.reflect[6] = -0.410184;
	b9.reflect[7] = -0.085668;
	b9.reflect[8] = 0.097895;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.918413;
	b10.reflect[1] = 0.219374;
	b10.reflect[2] = -0.345675;
	b10.reflect[3] = 0.514118;
	b10.reflect[4] = 0.159081;
	b10.reflect[5] = 0.238849;
	b10.reflect[6] = -0.272005;
	b10.reflect[7] = 0.065897;
	b10.reflect[8] = 0.284628;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.585885;
	b0.reflect[1] = 0.145169;
	b0.reflect[2] = -0.374095;
	b0.reflect[3] = 0.281513;
	b0.reflect[4] = 0.135485;
	b0.reflect[5] = 0.382126;
	b0.reflect[6] = -0.416289;
	b0.reflect[7] = 0.043738;
	b0.reflect[8] = -0.035488;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.807842;
	b1.reflect[1] = 0.203624;
	b1.reflect[2] = -0.187283;
	b1.reflect[3] = 0.203000;
	b1.reflect[4] = 0.091768;
	b1.reflect[5] = 0.448220;
	b1.reflect[6] = -0.497950;
	b1.reflect[7] = 0.105077;
	b1.reflect[8] = -0.109958;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.929671;
	b2.reflect[1] = 0.342077;
	b2.reflect[2] = 0.003583;
	b2.reflect[3] = 0.292306;
	b2.reflect[4] = 0.108128;
	b2.reflect[5] = 0.487648;
	b2.reflect[6] = -0.441136;
	b2.reflect[7] = 0.125973;
	b2.reflect[8] = -0.129838;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.929201;
	b3.reflect[1] = 0.169353;
	b3.reflect[2] = -0.096162;
	b3.reflect[3] = 0.362142;
	b3.reflect[4] = 0.073296;
	b3.reflect[5] = 0.219247;
	b3.reflect[6] = -0.123173;
	b3.reflect[7] = 0.174338;
	b3.reflect[8] = 0.051760;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.752775;
	b4.reflect[1] = -0.048065;
	b4.reflect[2] = -0.129761;
	b4.reflect[3] = 0.180384;
	b4.reflect[4] = 0.079279;
	b4.reflect[5] = 0.212445;
	b4.reflect[6] = -0.071615;
	b4.reflect[7] = 0.107047;
	b4.reflect[8] = 0.025858;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.597071;
	b5.reflect[1] = -0.011978;
	b5.reflect[2] = -0.161635;
	b5.reflect[3] = 0.147028;
	b5.reflect[4] = 0.057860;
	b5.reflect[5] = 0.281511;
	b5.reflect[6] = -0.090587;
	b5.reflect[7] = 0.046912;
	b5.reflect[8] = 0.021487;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.412783;
	b6.reflect[1] = 0.206587;
	b6.reflect[2] = -0.166098;
	b6.reflect[3] = 0.151337;
	b6.reflect[4] = 0.079497;
	b6.reflect[5] = 0.253791;
	b6.reflect[6] = -0.213685;
	b6.reflect[7] = 0.035664;
	b6.reflect[8] = 0.015983;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.378910;
	b7.reflect[1] = 0.039081;
	b7.reflect[2] = 0.023861;
	b7.reflect[3] = 0.141500;
	b7.reflect[4] = -0.015169;
	b7.reflect[5] = 0.193253;
	b7.reflect[6] = 0.024273;
	b7.reflect[7] = -0.101386;
	b7.reflect[8] = -0.033391;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.199163;
	b8.reflect[1] = -0.144391;
	b8.reflect[2] = -0.137036;
	b8.reflect[3] = 0.167726;
	b8.reflect[4] = 0.102483;
	b8.reflect[5] = 0.063813;
	b8.reflect[6] = 0.055839;
	b8.reflect[7] = 0.100641;
	b8.reflect[8] = -0.056930;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.115567;
	b9.reflect[1] = -0.029020;
	b9.reflect[2] = -0.039450;
	b9.reflect[3] = 0.016749;
	b9.reflect[4] = -0.019004;
	b9.reflect[5] = 0.031036;
	b9.reflect[6] = 0.018385;
	b9.reflect[7] = 0.013515;
	b9.reflect[8] = -0.016222;
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
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.910388;
	b0.reflect[1] = -0.070460;
	b0.reflect[2] = -0.079497;
	b0.reflect[3] = 0.217634;
	b0.reflect[4] = -0.012568;
	b0.reflect[5] = 0.120942;
	b0.reflect[6] = -0.023883;
	b0.reflect[7] = 0.117672;
	b0.reflect[8] = -0.033200;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.910460;
	b1.reflect[1] = -0.141941;
	b1.reflect[2] = -0.117800;
	b1.reflect[3] = 0.228664;
	b1.reflect[4] = 0.014295;
	b1.reflect[5] = 0.131723;
	b1.reflect[6] = -0.046545;
	b1.reflect[7] = 0.069847;
	b1.reflect[8] = -0.048886;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.903022;
	b2.reflect[1] = -0.182932;
	b2.reflect[2] = -0.136157;
	b2.reflect[3] = 0.244059;
	b2.reflect[4] = 0.016903;
	b2.reflect[5] = 0.155899;
	b2.reflect[6] = -0.050407;
	b2.reflect[7] = 0.126500;
	b2.reflect[8] = -0.033287;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.907908;
	b3.reflect[1] = -0.108178;
	b3.reflect[2] = -0.117954;
	b3.reflect[3] = 0.230972;
	b3.reflect[4] = -0.003662;
	b3.reflect[5] = 0.124774;
	b3.reflect[6] = -0.020913;
	b3.reflect[7] = 0.024994;
	b3.reflect[8] = -0.024506;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.906546;
	b4.reflect[1] = -0.049861;
	b4.reflect[2] = -0.167145;
	b4.reflect[3] = 0.263905;
	b4.reflect[4] = 0.033078;
	b4.reflect[5] = 0.111150;
	b4.reflect[6] = -0.053599;
	b4.reflect[7] = 0.085770;
	b4.reflect[8] = -0.057703;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.917817;
	b5.reflect[1] = -0.084138;
	b5.reflect[2] = -0.041965;
	b5.reflect[3] = 0.226707;
	b5.reflect[4] = -0.004157;
	b5.reflect[5] = 0.136615;
	b5.reflect[6] = -0.009150;
	b5.reflect[7] = 0.035240;
	b5.reflect[8] = -0.066551;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.757992;
	b6.reflect[1] = 0.129712;
	b6.reflect[2] = -0.129536;
	b6.reflect[3] = 0.306340;
	b6.reflect[4] = 0.052572;
	b6.reflect[5] = 0.247188;
	b6.reflect[6] = -0.199419;
	b6.reflect[7] = 0.030188;
	b6.reflect[8] = 0.014408;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.783505;
	b7.reflect[1] = 0.300750;
	b7.reflect[2] = -0.257531;
	b7.reflect[3] = 0.264795;
	b7.reflect[4] = 0.189750;
	b7.reflect[5] = 0.408040;
	b7.reflect[6] = -0.417367;
	b7.reflect[7] = 0.114651;
	b7.reflect[8] = -0.076468;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.788794;
	b8.reflect[1] = 0.307420;
	b8.reflect[2] = -0.000583;
	b8.reflect[3] = 0.242047;
	b8.reflect[4] = 0.198084;
	b8.reflect[5] = 0.284980;
	b8.reflect[6] = -0.161704;
	b8.reflect[7] = 0.068173;
	b8.reflect[8] = -0.062731;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.690945;
	b9.reflect[1] = -0.023418;
	b9.reflect[2] = -0.042607;
	b9.reflect[3] = 0.223324;
	b9.reflect[4] = 0.054090;
	b9.reflect[5] = 0.180226;
	b9.reflect[6] = -0.021399;
	b9.reflect[7] = 0.144754;
	b9.reflect[8] = -0.020278;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.491638;
	b10.reflect[1] = 0.193182;
	b10.reflect[2] = -0.213024;
	b10.reflect[3] = 0.152748;
	b10.reflect[4] = 0.021321;
	b10.reflect[5] = 0.357826;
	b10.reflect[6] = -0.269260;
	b10.reflect[7] = -0.045937;
	b10.reflect[8] = 0.024448;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.247012;
	b11.reflect[1] = -0.069802;
	b11.reflect[2] = -0.473390;
	b11.reflect[3] = 0.062979;
	b11.reflect[4] = 0.012959;
	b11.reflect[5] = 0.192871;
	b11.reflect[6] = 0.020855;
	b11.reflect[7] = 0.052575;
	b11.reflect[8] = -0.063373;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.250432;
	b0.reflect[1] = 0.409064;
	b0.reflect[2] = -0.342905;
	b0.reflect[3] = 0.057029;
	b0.reflect[4] = -0.065564;
	b0.reflect[5] = 0.695102;
	b0.reflect[6] = -0.422794;
	b0.reflect[7] = 0.207105;
	b0.reflect[8] = 0.075835;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.293145;
	b1.reflect[1] = 0.351946;
	b1.reflect[2] = -0.363776;
	b1.reflect[3] = 0.078263;
	b1.reflect[4] = 0.025134;
	b1.reflect[5] = 0.695858;
	b1.reflect[6] = -0.443132;
	b1.reflect[7] = 0.291791;
	b1.reflect[8] = -0.017439;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.459039;
	b2.reflect[1] = 0.172966;
	b2.reflect[2] = -0.288986;
	b2.reflect[3] = 0.180758;
	b2.reflect[4] = 0.087437;
	b2.reflect[5] = 0.640350;
	b2.reflect[6] = -0.461934;
	b2.reflect[7] = 0.273443;
	b2.reflect[8] = -0.184031;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.693608;
	b3.reflect[1] = 0.145125;
	b3.reflect[2] = -0.242888;
	b3.reflect[3] = 0.292996;
	b3.reflect[4] = 0.147861;
	b3.reflect[5] = 0.544811;
	b3.reflect[6] = -0.463087;
	b3.reflect[7] = 0.230512;
	b3.reflect[8] = -0.238506;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.833055;
	b4.reflect[1] = 0.214186;
	b4.reflect[2] = -0.210595;
	b4.reflect[3] = 0.361129;
	b4.reflect[4] = 0.209838;
	b4.reflect[5] = 0.530383;
	b4.reflect[6] = -0.445486;
	b4.reflect[7] = 0.416265;
	b4.reflect[8] = -0.182941;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.955290;
	b5.reflect[1] = 0.805905;
	b5.reflect[2] = -0.044034;
	b5.reflect[3] = 0.469125;
	b5.reflect[4] = 0.032624;
	b5.reflect[5] = 0.104519;
	b5.reflect[6] = -0.263986;
	b5.reflect[7] = 0.279774;
	b5.reflect[8] = 0.245547;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.963843;
	b6.reflect[1] = 0.788977;
	b6.reflect[2] = 0.185282;
	b6.reflect[3] = 0.471803;
	b6.reflect[4] = 0.158998;
	b6.reflect[5] = 0.144878;
	b6.reflect[6] = -0.150307;
	b6.reflect[7] = 0.154927;
	b6.reflect[8] = 0.167165;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.970037;
	b7.reflect[1] = 0.909278;
	b7.reflect[2] = 0.249439;
	b7.reflect[3] = 0.622710;
	b7.reflect[4] = -0.049870;
	b7.reflect[5] = 0.147800;
	b7.reflect[6] = -0.422646;
	b7.reflect[7] = 0.265740;
	b7.reflect[8] = 0.050804;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.971892;
	b8.reflect[1] = 0.898426;
	b8.reflect[2] = 0.359575;
	b8.reflect[3] = 0.413315;
	b8.reflect[4] = 0.021233;
	b8.reflect[5] = 0.200310;
	b8.reflect[6] = -0.266403;
	b8.reflect[7] = -0.011771;
	b8.reflect[8] = 0.183424;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.974488;
	b9.reflect[1] = 0.903502;
	b9.reflect[2] = 0.464128;
	b9.reflect[3] = 0.604124;
	b9.reflect[4] = -0.256645;
	b9.reflect[5] = 0.337887;
	b9.reflect[6] = -0.408753;
	b9.reflect[7] = 0.142007;
	b9.reflect[8] = -0.255532;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.973703;
	b10.reflect[1] = 0.847300;
	b10.reflect[2] = 0.384419;
	b10.reflect[3] = 0.463608;
	b10.reflect[4] = 0.021988;
	b10.reflect[5] = 0.165958;
	b10.reflect[6] = -0.016985;
	b10.reflect[7] = -0.197082;
	b10.reflect[8] = 0.077814;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[5] = version;
 
	b0.reflect[0] = -0.323758;
	b0.reflect[1] = 0.377886;
	b0.reflect[2] = -0.346616;
	b0.reflect[3] = 0.132942;
	b0.reflect[4] = -0.067296;
	b0.reflect[5] = 0.783163;
	b0.reflect[6] = -0.310920;
	b0.reflect[7] = 0.212459;
	b0.reflect[8] = -0.012649;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.249603;
	b1.reflect[1] = 0.313102;
	b1.reflect[2] = -0.269294;
	b1.reflect[3] = 0.174361;
	b1.reflect[4] = -0.125094;
	b1.reflect[5] = 0.805457;
	b1.reflect[6] = -0.191362;
	b1.reflect[7] = 0.232417;
	b1.reflect[8] = 0.054968;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.275484;
	b2.reflect[1] = 0.264316;
	b2.reflect[2] = -0.224629;
	b2.reflect[3] = 0.205240;
	b2.reflect[4] = -0.059232;
	b2.reflect[5] = 0.781339;
	b2.reflect[6] = -0.216657;
	b2.reflect[7] = 0.292361;
	b2.reflect[8] = -0.011942;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.297020;
	b3.reflect[1] = 0.264436;
	b3.reflect[2] = -0.202330;
	b3.reflect[3] = 0.183225;
	b3.reflect[4] = -0.027862;
	b3.reflect[5] = 0.757730;
	b3.reflect[6] = -0.305837;
	b3.reflect[7] = 0.372988;
	b3.reflect[8] = -0.133483;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.371208;
	b4.reflect[1] = 0.207278;
	b4.reflect[2] = -0.207249;
	b4.reflect[3] = 0.200472;
	b4.reflect[4] = -0.063829;
	b4.reflect[5] = 0.720760;
	b4.reflect[6] = -0.408895;
	b4.reflect[7] = 0.323018;
	b4.reflect[8] = -0.142068;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.666432;
	b5.reflect[1] = 0.270236;
	b5.reflect[2] = -0.180824;
	b5.reflect[3] = 0.330498;
	b5.reflect[4] = 0.059653;
	b5.reflect[5] = 0.656244;
	b5.reflect[6] = -0.535414;
	b5.reflect[7] = 0.245381;
	b5.reflect[8] = -0.129342;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.827125;
	b6.reflect[1] = 0.296347;
	b6.reflect[2] = -0.160653;
	b6.reflect[3] = 0.394858;
	b6.reflect[4] = 0.053895;
	b6.reflect[5] = 0.402744;
	b6.reflect[6] = -0.408293;
	b6.reflect[7] = 0.049744;
	b6.reflect[8] = 0.012904;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.955512;
	b7.reflect[1] = 0.615917;
	b7.reflect[2] = 0.080633;
	b7.reflect[3] = 0.564916;
	b7.reflect[4] = 0.208747;
	b7.reflect[5] = 0.507765;
	b7.reflect[6] = -0.377720;
	b7.reflect[7] = 0.200937;
	b7.reflect[8] = -0.094279;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.963401;
	b8.reflect[1] = 0.734465;
	b8.reflect[2] = 0.263733;
	b8.reflect[3] = 0.448914;
	b8.reflect[4] = -0.077005;
	b8.reflect[5] = 0.280480;
	b8.reflect[6] = -0.362810;
	b8.reflect[7] = 0.255193;
	b8.reflect[8] = 0.272209;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.971104;
	b9.reflect[1] = 0.857378;
	b9.reflect[2] = 0.106639;
	b9.reflect[3] = 0.407611;
	b9.reflect[4] = 0.032579;
	b9.reflect[5] = 0.456864;
	b9.reflect[6] = -0.317884;
	b9.reflect[7] = 0.160557;
	b9.reflect[8] = 0.106973;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.970383;
	b10.reflect[1] = 0.743698;
	b10.reflect[2] = 0.271598;
	b10.reflect[3] = 0.416829;
	b10.reflect[4] = 0.164360;
	b10.reflect[5] = 0.316798;
	b10.reflect[6] = -0.219019;
	b10.reflect[7] = -0.038993;
	b10.reflect[8] = 0.277548;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0;
	b11.reflect[1] = 0;
	b11.reflect[2] = 0;
	b11.reflect[3] = 0;
	b11.reflect[4] = 0;
	b11.reflect[5] = 0;
	b11.reflect[6] = 0;
	b11.reflect[7] = 0;
	b11.reflect[8] = 0;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[6] = version;
 
	b0.reflect[0] = -0.678624;
	b0.reflect[1] = -0.092897;
	b0.reflect[2] = -0.134790;
	b0.reflect[3] = 0.144989;
	b0.reflect[4] = -0.002818;
	b0.reflect[5] = 0.122551;
	b0.reflect[6] = -0.020819;
	b0.reflect[7] = 0.100578;
	b0.reflect[8] = -0.108767;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.641768;
	b1.reflect[1] = -0.036717;
	b1.reflect[2] = -0.125451;
	b1.reflect[3] = 0.155276;
	b1.reflect[4] = -0.054958;
	b1.reflect[5] = 0.144683;
	b1.reflect[6] = -0.026848;
	b1.reflect[7] = 0.117481;
	b1.reflect[8] = 0.021317;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.525027;
	b2.reflect[1] = -0.094070;
	b2.reflect[2] = -0.116902;
	b2.reflect[3] = 0.200887;
	b2.reflect[4] = 0.007430;
	b2.reflect[5] = 0.105905;
	b2.reflect[6] = 0.026791;
	b2.reflect[7] = 0.070714;
	b2.reflect[8] = 0.011080;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.412217;
	b3.reflect[1] = 0.007861;
	b3.reflect[2] = -0.087247;
	b3.reflect[3] = 0.097110;
	b3.reflect[4] = -0.109933;
	b3.reflect[5] = 0.064028;
	b3.reflect[6] = 0.022273;
	b3.reflect[7] = 0.104217;
	b3.reflect[8] = 0.109967;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.330394;
	b4.reflect[1] = 0.010996;
	b4.reflect[2] = -0.126880;
	b4.reflect[3] = -0.006296;
	b4.reflect[4] = -0.068371;
	b4.reflect[5] = 0.033989;
	b4.reflect[6] = 0.014180;
	b4.reflect[7] = 0.059664;
	b4.reflect[8] = 0.031601;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.253315;
	b5.reflect[1] = -0.032579;
	b5.reflect[2] = -0.085394;
	b5.reflect[3] = 0.084924;
	b5.reflect[4] = 0.022690;
	b5.reflect[5] = 0.042742;
	b5.reflect[6] = -0.015795;
	b5.reflect[7] = 0.046516;
	b5.reflect[8] = 0.030316;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.239009;
	b6.reflect[1] = 0.078426;
	b6.reflect[2] = 0.002291;
	b6.reflect[3] = 0.094333;
	b6.reflect[4] = 0.044596;
	b6.reflect[5] = 0.129527;
	b6.reflect[6] = 0.038936;
	b6.reflect[7] = -0.020543;
	b6.reflect[8] = -0.001960;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.004614;
	b7.reflect[1] = 0.067757;
	b7.reflect[2] = -0.011581;
	b7.reflect[3] = -0.022060;
	b7.reflect[4] = -0.043728;
	b7.reflect[5] = 0.085369;
	b7.reflect[6] = -0.034083;
	b7.reflect[7] = 0.002140;
	b7.reflect[8] = -0.016255;
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
 
	word.versions[7] = version;
 
	b0.reflect[0] = -0.602392;
	b0.reflect[1] = -0.167925;
	b0.reflect[2] = -0.194668;
	b0.reflect[3] = 0.161989;
	b0.reflect[4] = -0.040129;
	b0.reflect[5] = 0.185391;
	b0.reflect[6] = -0.032770;
	b0.reflect[7] = 0.067684;
	b0.reflect[8] = -0.010628;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.626316;
	b1.reflect[1] = -0.114197;
	b1.reflect[2] = -0.244296;
	b1.reflect[3] = 0.199481;
	b1.reflect[4] = 0.020399;
	b1.reflect[5] = 0.121346;
	b1.reflect[6] = -0.064948;
	b1.reflect[7] = 0.068237;
	b1.reflect[8] = 0.002871;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.628873;
	b2.reflect[1] = -0.052102;
	b2.reflect[2] = -0.173134;
	b2.reflect[3] = 0.080632;
	b2.reflect[4] = 0.003098;
	b2.reflect[5] = 0.158153;
	b2.reflect[6] = 0.015030;
	b2.reflect[7] = 0.032998;
	b2.reflect[8] = 0.051731;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.606899;
	b3.reflect[1] = -0.046382;
	b3.reflect[2] = -0.154217;
	b3.reflect[3] = 0.161701;
	b3.reflect[4] = -0.075325;
	b3.reflect[5] = 0.127091;
	b3.reflect[6] = -0.106786;
	b3.reflect[7] = 0.147115;
	b3.reflect[8] = 0.021016;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.667712;
	b4.reflect[1] = -0.083681;
	b4.reflect[2] = -0.123600;
	b4.reflect[3] = 0.237767;
	b4.reflect[4] = -0.029423;
	b4.reflect[5] = 0.207340;
	b4.reflect[6] = -0.037806;
	b4.reflect[7] = 0.136116;
	b4.reflect[8] = -0.033961;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.660299;
	b5.reflect[1] = -0.091419;
	b5.reflect[2] = -0.236009;
	b5.reflect[3] = 0.279296;
	b5.reflect[4] = 0.066741;
	b5.reflect[5] = 0.195478;
	b5.reflect[6] = -0.020581;
	b5.reflect[7] = 0.104963;
	b5.reflect[8] = 0.039040;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.510136;
	b6.reflect[1] = 0.459809;
	b6.reflect[2] = -0.206420;
	b6.reflect[3] = 0.183543;
	b6.reflect[4] = -0.007942;
	b6.reflect[5] = 0.412613;
	b6.reflect[6] = 0.058968;
	b6.reflect[7] = 0.113449;
	b6.reflect[8] = 0.083524;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.667876;
	b7.reflect[1] = 0.247911;
	b7.reflect[2] = -0.023377;
	b7.reflect[3] = 0.438858;
	b7.reflect[4] = 0.001737;
	b7.reflect[5] = 0.527526;
	b7.reflect[6] = -0.304164;
	b7.reflect[7] = 0.105082;
	b7.reflect[8] = 0.052574;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.908632;
	b8.reflect[1] = 0.358366;
	b8.reflect[2] = 0.135136;
	b8.reflect[3] = 0.455474;
	b8.reflect[4] = -0.094383;
	b8.reflect[5] = 0.312972;
	b8.reflect[6] = -0.241474;
	b8.reflect[7] = 0.152574;
	b8.reflect[8] = 0.045743;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.577115;
	b9.reflect[1] = -0.114355;
	b9.reflect[2] = -0.262863;
	b9.reflect[3] = 0.093343;
	b9.reflect[4] = -0.087490;
	b9.reflect[5] = 0.353107;
	b9.reflect[6] = 0.044608;
	b9.reflect[7] = 0.020607;
	b9.reflect[8] = 0.073478;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.197805;
	b10.reflect[1] = 0.183239;
	b10.reflect[2] = -0.215746;
	b10.reflect[3] = -0.000545;
	b10.reflect[4] = -0.188295;
	b10.reflect[5] = 0.477366;
	b10.reflect[6] = -0.088613;
	b10.reflect[7] = 0.039878;
	b10.reflect[8] = -0.036576;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.041164;
	b11.reflect[1] = 0.284494;
	b11.reflect[2] = -0.113172;
	b11.reflect[3] = -0.014721;
	b11.reflect[4] = -0.199980;
	b11.reflect[5] = 0.457526;
	b11.reflect[6] = 0.032924;
	b11.reflect[7] = 0.043520;
	b11.reflect[8] = -0.047659;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[8] = version;
 
	b0.reflect[0] = -0.264765;
	b0.reflect[1] = 0.435521;
	b0.reflect[2] = -0.453064;
	b0.reflect[3] = -0.007582;
	b0.reflect[4] = 0.005238;
	b0.reflect[5] = -0.139963;
	b0.reflect[6] = 0.281392;
	b0.reflect[7] = 0.528772;
	b0.reflect[8] = -0.081130;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.116057;
	b1.reflect[1] = 0.602196;
	b1.reflect[2] = -0.357763;
	b1.reflect[3] = -0.052590;
	b1.reflect[4] = -0.024189;
	b1.reflect[5] = -0.157457;
	b1.reflect[6] = 0.314524;
	b1.reflect[7] = 0.385670;
	b1.reflect[8] = -0.163720;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.333308;
	b2.reflect[1] = 0.522540;
	b2.reflect[2] = -0.347052;
	b2.reflect[3] = -0.035285;
	b2.reflect[4] = -0.104188;
	b2.reflect[5] = -0.247946;
	b2.reflect[6] = 0.371083;
	b2.reflect[7] = 0.288109;
	b2.reflect[8] = -0.187165;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.617367;
	b3.reflect[1] = 0.006159;
	b3.reflect[2] = -0.660335;
	b3.reflect[3] = 0.245326;
	b3.reflect[4] = -0.008996;
	b3.reflect[5] = -0.038990;
	b3.reflect[6] = 0.291583;
	b3.reflect[7] = 0.289301;
	b3.reflect[8] = 0.334285;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.720240;
	b4.reflect[1] = 0.000309;
	b4.reflect[2] = -0.627190;
	b4.reflect[3] = 0.367087;
	b4.reflect[4] = 0.007610;
	b4.reflect[5] = -0.012780;
	b4.reflect[6] = 0.310593;
	b4.reflect[7] = 0.285143;
	b4.reflect[8] = 0.313793;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.492222;
	b5.reflect[1] = -0.080411;
	b5.reflect[2] = -0.314240;
	b5.reflect[3] = 0.009240;
	b5.reflect[4] = 0.188364;
	b5.reflect[5] = -0.102658;
	b5.reflect[6] = -0.002299;
	b5.reflect[7] = 0.239942;
	b5.reflect[8] = -0.054010;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.183636;
	b6.reflect[1] = -0.211489;
	b6.reflect[2] = -0.111220;
	b6.reflect[3] = -0.143054;
	b6.reflect[4] = -0.020900;
	b6.reflect[5] = -0.120124;
	b6.reflect[6] = -0.002319;
	b6.reflect[7] = 0.189686;
	b6.reflect[8] = -0.048265;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.825528;
	b7.reflect[1] = -0.084377;
	b7.reflect[2] = -0.303842;
	b7.reflect[3] = 0.179592;
	b7.reflect[4] = 0.294403;
	b7.reflect[5] = 0.063183;
	b7.reflect[6] = 0.052124;
	b7.reflect[7] = 0.138793;
	b7.reflect[8] = 0.041814;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.243877;
	b8.reflect[1] = 0.084303;
	b8.reflect[2] = -0.225390;
	b8.reflect[3] = 0.239817;
	b8.reflect[4] = -0.064953;
	b8.reflect[5] = 0.017794;
	b8.reflect[6] = 0.015209;
	b8.reflect[7] = 0.120224;
	b8.reflect[8] = 0.047930;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.250837;
	b9.reflect[1] = 0.125761;
	b9.reflect[2] = -0.053618;
	b9.reflect[3] = 0.138407;
	b9.reflect[4] = -0.091114;
	b9.reflect[5] = 0.028761;
	b9.reflect[6] = 0.122655;
	b9.reflect[7] = 0.167106;
	b9.reflect[8] = -0.078617;
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
 
	word.versions[9] = version;
 
	b0.reflect[0] = -0.171186;
	b0.reflect[1] = 0.295674;
	b0.reflect[2] = -0.298193;
	b0.reflect[3] = -0.244761;
	b0.reflect[4] = 0.080454;
	b0.reflect[5] = 0.194681;
	b0.reflect[6] = -0.098898;
	b0.reflect[7] = 0.621944;
	b0.reflect[8] = -0.169148;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.296776;
	b1.reflect[1] = 0.418277;
	b1.reflect[2] = -0.427317;
	b1.reflect[3] = 0.137183;
	b1.reflect[4] = 0.033665;
	b1.reflect[5] = 0.142034;
	b1.reflect[6] = 0.227834;
	b1.reflect[7] = 0.359951;
	b1.reflect[8] = -0.328952;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.542789;
	b2.reflect[1] = 0.258344;
	b2.reflect[2] = -0.658600;
	b2.reflect[3] = 0.394276;
	b2.reflect[4] = -0.363497;
	b2.reflect[5] = 0.327663;
	b2.reflect[6] = 0.030374;
	b2.reflect[7] = 0.448899;
	b2.reflect[8] = 0.168925;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.734505;
	b3.reflect[1] = 0.069598;
	b3.reflect[2] = -0.602435;
	b3.reflect[3] = 0.417480;
	b3.reflect[4] = -0.274314;
	b3.reflect[5] = 0.221996;
	b3.reflect[6] = 0.051441;
	b3.reflect[7] = 0.369752;
	b3.reflect[8] = 0.368638;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.472243;
	b4.reflect[1] = 0.014823;
	b4.reflect[2] = -0.454655;
	b4.reflect[3] = 0.330022;
	b4.reflect[4] = -0.164167;
	b4.reflect[5] = 0.169660;
	b4.reflect[6] = -0.096112;
	b4.reflect[7] = 0.196864;
	b4.reflect[8] = 0.235578;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.132521;
	b5.reflect[1] = -0.040473;
	b5.reflect[2] = 0.037040;
	b5.reflect[3] = -0.033052;
	b5.reflect[4] = 0.023428;
	b5.reflect[5] = -0.044826;
	b5.reflect[6] = -0.061935;
	b5.reflect[7] = 0.056944;
	b5.reflect[8] = 0.008385;
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
 
	word.versions[10] = version;
 
	b0.reflect[0] = -0.566524;
	b0.reflect[1] = 0.274318;
	b0.reflect[2] = -0.421274;
	b0.reflect[3] = 0.018058;
	b0.reflect[4] = -0.014423;
	b0.reflect[5] = 0.076278;
	b0.reflect[6] = 0.201686;
	b0.reflect[7] = 0.493842;
	b0.reflect[8] = -0.145879;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.387975;
	b1.reflect[1] = 0.353751;
	b1.reflect[2] = -0.362245;
	b1.reflect[3] = 0.056772;
	b1.reflect[4] = 0.108157;
	b1.reflect[5] = 0.120627;
	b1.reflect[6] = 0.184266;
	b1.reflect[7] = 0.385439;
	b1.reflect[8] = -0.378577;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.587575;
	b2.reflect[1] = 0.425696;
	b2.reflect[2] = -0.529465;
	b2.reflect[3] = 0.268416;
	b2.reflect[4] = -0.173253;
	b2.reflect[5] = 0.131042;
	b2.reflect[6] = 0.234271;
	b2.reflect[7] = 0.093901;
	b2.reflect[8] = -0.186624;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.688105;
	b3.reflect[1] = 0.152517;
	b3.reflect[2] = -0.651223;
	b3.reflect[3] = 0.450763;
	b3.reflect[4] = -0.373418;
	b3.reflect[5] = 0.243960;
	b3.reflect[6] = -0.106749;
	b3.reflect[7] = 0.489914;
	b3.reflect[8] = 0.284703;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.842696;
	b4.reflect[1] = 0.119543;
	b4.reflect[2] = -0.594554;
	b4.reflect[3] = 0.497236;
	b4.reflect[4] = -0.333135;
	b4.reflect[5] = 0.249254;
	b4.reflect[6] = 0.073910;
	b4.reflect[7] = 0.423392;
	b4.reflect[8] = 0.288121;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.652327;
	b5.reflect[1] = -0.224958;
	b5.reflect[2] = -0.231557;
	b5.reflect[3] = -0.032407;
	b5.reflect[4] = 0.072378;
	b5.reflect[5] = -0.016448;
	b5.reflect[6] = 0.015379;
	b5.reflect[7] = 0.153441;
	b5.reflect[8] = 0.019116;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.031725;
	b6.reflect[1] = -0.166747;
	b6.reflect[2] = -0.247351;
	b6.reflect[3] = -0.174479;
	b6.reflect[4] = -0.061783;
	b6.reflect[5] = 0.015178;
	b6.reflect[6] = -0.066272;
	b6.reflect[7] = 0.243681;
	b6.reflect[8] = 0.006812;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.558525;
	b7.reflect[1] = -0.238001;
	b7.reflect[2] = -0.201878;
	b7.reflect[3] = 0.051028;
	b7.reflect[4] = 0.033292;
	b7.reflect[5] = 0.044052;
	b7.reflect[6] = -0.010836;
	b7.reflect[7] = 0.181144;
	b7.reflect[8] = -0.120806;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.443907;
	b8.reflect[1] = -0.250337;
	b8.reflect[2] = -0.155296;
	b8.reflect[3] = 0.117510;
	b8.reflect[4] = 0.073297;
	b8.reflect[5] = 0.076594;
	b8.reflect[6] = 0.034668;
	b8.reflect[7] = 0.065502;
	b8.reflect[8] = 0.054415;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.241226;
	b9.reflect[1] = 0.227451;
	b9.reflect[2] = -0.100563;
	b9.reflect[3] = 0.005074;
	b9.reflect[4] = -0.105739;
	b9.reflect[5] = -0.002027;
	b9.reflect[6] = 0.166242;
	b9.reflect[7] = 0.077160;
	b9.reflect[8] = -0.024619;
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
 
	word.versions[11] = version;
 
	word.name = "left";
 
	db.words[1] = word;
 
	*current_db = db; 
	return; 
} 