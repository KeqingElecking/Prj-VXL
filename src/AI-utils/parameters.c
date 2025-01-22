#include "include/parameters.h"

float weights_layer_1[INPUT_LAYER_SIZE][NUM_NEURONS_LAYER1] = {
    {0.634940624, 0.212617606, 0.056945533, 0.220862582, 0.227207482, 0.336460114, 0.614047885, 0.026714718, -0.387037486, 0.456367284, 0.023874583, -0.520202994, 0.088306963, 0.362805367, -0.368452102, 0.401002616, -0.120392971, -0.330015689, -0.005930131, 0.291885257, -0.423335105, 0.509016097, -0.094561316, 0.101094022, -0.4454045, -0.279158056, 0.404857457, 0.117157876, 0.149978817, 0.172740996, 0.159221485, -0.38729471, -0.086501651, 0.19809404, -0.103968129, -0.47019738, -0.452749878, -0.200318635, 0.129696071, -0.336246043, -0.130223989, -0.04006774, -0.397462547, 0.018617822, 0.411537588, 0.39996922, 0.246808916, 0.513817549, 0.139574841, -0.028870039, -0.059783746, 0.679958701, -0.24568966, -0.361834317, 0.083419703, 0.632446945, -0.289632916, -0.310546488, -0.163279191, 0.493702322, 0.061538398, -0.57215333, 0.093161158, 0.521786451},
    {0.164838612, 0.219157383, -0.428333968, -0.391173929, -0.097675391, 0.488229752, 0.167994857, -0.046013825, -0.197659642, 0.230789706, 0.236153334, -0.058155723, -0.208392277, 0.234059468, -0.321268678, 0.31742546, 0.002089776, 0.110298924, 0.183100402, 0.205752209, -0.150844425, 0.159024611, -0.122175872, -0.063281476, -0.242021725, 0.090605684, 0.289311856, -0.105367631, -0.324739069, -0.014706002, 0.010915925, 0.067951053, 0.034567993, -0.022518598, -0.117655039, -0.261630833, 0.068343773, -0.334790438, -0.151010677, 0.239109159, 0.385846496, 0.198209122, -0.184536159, -0.155723274, 0.04893747, 0.071805812, 0.470073938, 0.168724388, -0.217319712, 0.160388052, 0.377028167, 0.304004252, 0.311533302, 0.229694366, -0.35109362, 0.326804101, 0.069834717, 0.281069815, 0.334343433, 0.125817329, -0.312701285, -0.20618093, 0.234507084, 0.227182463},
    {-0.009457725, -0.088729322, 0.163691521, -0.350877941, -0.403048873, 0.320876181, -0.200943559, -0.249497414, 0.036682725, -0.297782212, 0.294055313, 0.217041925, -0.019163663, 0.048762232, -0.072726004, 0.459851772, 0.068161614, 0.159769624, -0.080606334, -0.234298527, 0.268191546, 0.024992008, -0.049602613, -0.219548076, 0.050200261, 0.19699271, 0.138379171, -0.052247845, 0.016418131, -0.137233332, -0.377201021, 0.287315369, -0.314844221, -0.330977648, 0.12854448, 0.072094411, 0.118674487, 0.069610298, -0.109180793, 0.305669963, 0.455876231, 0.029138017, 0.152607903, -0.200503811, -0.130194098, 0.004856127, 0.335972756, 0.064451516, -0.36538285, 0.069641434, 0.400003374, -0.176988229, -0.254881382, 0.407791913, 0.189111218, 0.068152934, 0.102060348, 0.510352492, 0.500298202, -0.128435269, -0.347563416, 0.242265269, 0.198378459, -0.043037847},
    {-0.042506922, 0.071006246, -0.260115355, 0.098306865, -0.216934294, 0.088709377, -0.129101813, 0.097909763, -0.079262733, 0.232523561, 0.018159812, -0.050163094, -0.113679558, 0.084249765, 0.121064864, -0.178812817, -0.132822394, -0.239215553, -0.103475884, -0.045224581, 0.043085471, -0.123841256, -0.143639967, -0.095820561, 0.016410058, -0.207256094, 0.049480364, 0.361804903, -0.482308924, -0.021347433, 0.270233989, 0.149148658, 0.191106245, -0.193313405, -0.153163508, 0.026332239, 0.045379277, 0.010298295, 0.08000873, 0.136848748, -0.2256473, -0.242627278, -0.097715601, -0.131036922, 0.052441899, -0.064389907, 0.036368858, -0.046786811, 0.072092928, 0.086975366, -0.034427758, -0.131385148, -0.218798041, -0.013761366, -0.367073953, -0.020945434, -0.413922787, 0.08069814, -0.063911483, -0.173150316, -0.037173383, -0.060733452, -0.164099559, -0.139836654},
    {-0.119595915, 0.415386885, -0.111334771, -0.071029216, -0.207904175, -0.121845372, 0.165206298, 0.299541712, -0.024289591, -0.276956439, -0.422418267, 0.220723659, -0.312846661, -0.416274071, -0.272776872, -0.279552191, 0.521924973, 0.21324563, -0.439809561, 0.244566172, 0.170802534, 0.248606935, -0.669332743, -0.683453441, -0.209090903, 0.294436693, 0.104245424, 0.120376475, -0.157677934, 0.327385128, -0.000127929, 0.07813748, -0.058116592, -0.151079625, 0.412616611, -0.17823109, 0.163421765, -0.414490849, 0.161961704, -0.088847287, -0.345552832, 0.197776616, 0.187190041, -0.727602541, 0.374685645, 0.186472386, -0.061241277, 0.306540161, -0.063477717, -0.301141143, -0.305750251, -0.106023952, -0.183673829, 0.070020936, -0.093936056, 0.016289726, 0.019709703, -0.225787401, -0.320680678, 0.316104501, 0.158279717, 0.221654072, -0.160955906, 0.224452198},
    {0.05134052, 0.16555056, -0.373074174, -0.119768441, 0.330187231, 0.020154743, 0.024941351, 0.216352522, 0.052763097, -0.061087657, -0.001276742, 0.041187163, 0.171028748, -0.015658667, 0.023932632, 0.29674837, 0.215667397, 0.023428474, -0.305034161, 0.246048793, 0.120047621, 0.042786889, -0.266980618, -0.161264509, 0.01447819, 0.077130668, -0.076669298, 0.014757841, -0.154672533, -0.260430038, 0.320898861, -0.025510451, 0.377006531, 0.243364215, 0.163204938, 0.015643671, 0.132344365, -0.078251548, -0.095560588, -0.284636378, -0.051685773, -0.045414016, 0.105206393, -0.158372208, 0.191383481, 0.080713272, 0.028932024, 0.004964117, -0.101082973, -0.355691612, 0.035941608, -0.049047139, -0.280164063, 0.272576928, -0.274765074, 0.008249821, 0.035416644, -0.122078009, 0.104899041, 0.046249732, -0.193780735, 0.007445618, -0.020385459, 0.058452189}
};

float bias_layer_1[NUM_NEURONS_LAYER1] = {-0.140536621, 0.090322897, -0.046090219, 0.061451219, -0.090356365, 0.155583739, -0.106649891, -0.04476599, -0.029455991, -0.026169674, -0.091391318, -0.224236175, 0.052498136, 0.083641164, -0.019878827, 0.169888303, 0.033353262, 0.13400276, 0.065592095, 0.100047126, -0.124146476, -0.234923199, -0.119382888, -0.1062565, 0.012001587, -0.23814854, -0.154619992, -0.156839266, -0.135433733, -0.04754097, -0.105253614, -0.050103094, -0.028450899, -0.05333367, 0.008605103, 0.000671315, -0.100090429, 0.203519166, -0.052085537, 0.183504656, -0.036388755, -0.163321644, 0.090057172, -0.15609777, 0.002760462, -0.188742518, 0.141836986, -0.277378052, 0.049487032, -0.001849971, -0.142956883, -0.23064582, -0.078217857, 0.037821282, -0.110087737, -0.225737453, 0.124690749, 0.048918076, -0.160025254, -0.01128371, -0.056724813, -0.019444164, -0.006750112, -0.230636567};

float weights_layer_2[NUM_NEURONS_LAYER1][NUM_NEURONS_LAYER2] = {
    {-0.365720093, -0.011679979, -0.403267771, -0.348882049, 0.51550746, 0.429621249, 0.456785291, -0.255091876, -0.113610119, 0.509125531, 0.048099499, 0.412248939, 0.229825467, 0.001923044, -0.408914328, 0.426654905, -0.052893788, 0.341351926, -0.020609004, -0.203626364, -0.265149593, -0.026346771, 0.385736823, 0.204113692, 0.343844622, 0.08118356, -0.210560501, -0.24087812, -0.329861373, 0.149402246, -0.173786238, -0.16827108},
    {0.136944994, -0.659006059, 0.301705033, 0.016490292, 0.230454162, 0.030552518, 0.030325612, -0.106420398, -0.170413166, 0.158808246, 0.02862699, 0.245029792, -0.047556959, 0.20184499, 0.120836034, 0.065138638, 0.155479595, -0.004312731, 0.289107621, -0.465971053, -0.170401916, 0.145428747, 0.116949409, 0.186207578, 0.065662324, 0.151265487, 0.193085641, -0.247809961, 0.262353361, 0.054239631, -0.479700744, 0.082718499},
    {-0.04898316, 0.152230054, 0.316587746, 0.124435849, -0.356660336, -0.213953122, -0.147731081, -0.218577221, -0.050135098, -0.118123643, -0.215200052, -0.294768602, -0.097149245, -0.066350117, 0.193627983, -0.305478841, 0.28528589, -0.202187493, 0.125255525, 0.008345183, -0.462636083, 0.289720058, -0.201114506, 0.039702434, -0.130341217, -0.369274646, 0.310636252, -0.241117239, -0.029423688, -0.213468865, -0.133421466, 0.05664365},
    {0.177799031, 0.130237088, 0.27408272, 0.117564738, -0.292011797, -0.217970043, -0.05095014, -0.438049048, -0.073050566, -0.082502946, -0.40012303, -0.22035189, 0.04530308, 0.068357758, 0.275638998, -0.464654326, 0.156402916, -0.096915066, -0.066239543, -0.113122523, -0.293622494, -0.151107594, -0.300032407, -0.182659209, -0.15844439, -0.314479828, -0.086817116, -0.22145927, 0.241789803, -0.118356392, 0.146877915, 0.105032101},
    {0.249888822, -0.115791708, 0.321766466, -0.150493726, -0.07670296, -0.162132621, -0.199884251, -0.09419588, 0.133844689, -0.141328186, -0.157360837, -0.312580884, -0.421479136, 0.166045249, 0.439796716, -0.213625118, 0.143737122, 0.108151503, 0.397118986, -0.10378693, -0.288192421, 0.31762135, -0.313985825, -0.286013603, -0.24586308, -0.189272627, 0.463293225, 0.095982879, 0.40914616, 0.081175499, 0.030219279, 0.223475382},
    {0.149380907, -0.611158788, -0.096733361, 0.134448454, 0.199826598, 0.056185517, 0.101998001, -0.199878141, 0.002733005, -0.026790088, -0.487762451, 0.040560253, -0.454089165, -0.226526454, -0.030624272, 0.078695498, -0.209145486, 0.247808486, 0.012345087, -0.37697351, -0.518152237, 0.121956915, 0.184754491, 0.181829035, 0.031219216, -0.279473871, 0.004908672, -0.547074676, 0.152854845, 0.116189428, -0.589149892, -0.014327513},
    {-0.238637805, -0.401815742, -0.14392285, -0.431517065, -0.11745692, 0.043568071, 0.346995115, -0.040035084, -0.204501942, 0.409547746, 0.02220655, 0.105676934, -0.216258228, 0.050919931, 0.078624718, 0.31412527, 0.147874981, 0.172212243, 0.084466353, -0.291199088, 0.068664834, -0.109414041, 0.178318709, 0.308470696, 0.019587357, 0.021290846, 0.122006305, -0.351735741, 0.16640076, 0.333758861, -0.291426539, -0.051670291},
    {-0.018329345, -0.11458803, 0.136444494, -0.309887528, 0.061363988, -0.271817833, -0.034729697, -0.014573982, -0.152731612, -0.278140277, 0.137084141, -0.139114857, 0.177555516, 0.233817816, 0.254447162, -0.20606108, 0.229674861, -0.212756291, -0.002148922, 0.119236916, 0.04796984, 0.154304564, 0.070037305, 0.144813299, 0.126067773, -0.038243745, 0.128302172, -0.207684413, -0.006073962, -0.384570807, -0.040842514, -0.05270477},
    {-0.220477059, 0.29141143, -0.097255856, 0.0248258, 0.131002694, 0.191150874, 0.538769901, 0.382694244, -0.107886508, -0.011573457, 0.03328146, 0.185850292, 0.273455948, -0.312322289, -0.134075955, 0.165919304, -0.205478474, 0.368950814, -0.398348987, 0.187887877, 0.414384991, -0.205251575, 0.072525568, 0.101260968, 0.476991147, 0.004623032, -0.193167627, 0.116299942, 0.035111021, -0.198561117, 0.376835734, -0.186578482},
    {0.327115119, -0.215509132, 0.345178396, 0.11397171, -0.039868604, 0.335529327, 0.166127384, -0.240477666, 0.186289236, 0.189824298, -0.124097936, 0.14785707, -0.326544464, -0.129884109, 0.271649569, 0.433558643, 0.052265778, 0.200692579, 0.242957458, -0.315105826, -0.128269747, 0.064866483, -0.155969456, 0.319649279, -0.117622875, -0.395807147, 0.381572843, -0.421791852, -0.18574883, 0.22020942, -0.389881223, 0.206320956},
    {0.188898757, -0.280996054, 0.339812458, 0.508302152, -0.301987797, -0.176893651, -0.098174028, -0.156811044, 0.410340935, -0.004777791, -0.161085263, -0.338039398, -0.362128735, -0.211125568, 0.394428879, 0.126017362, -0.052190986, -0.107237831, 0.111069806, -0.279112965, -0.308781981, 0.132990047, -0.246485919, -0.193475217, 0.029285286, -0.09511885, 0.347692847, -0.159105778, -0.011055659, 0.102028489, -0.334937006, 0.395217568},
    {-0.390931487, 0.384807616, -0.235908419, -0.163842067, 0.610569, 0.067159519, 0.301045328, 0.76624763, -0.310198814, 0.089998968, 0.469267905, 0.486160517, 0.419516891, -0.182989359, -0.332302183, 0.169635504, -0.333803445, 0.494984031, -0.454093903, 0.305511236, 0.208612993, -0.453749686, 0.315216064, -0.063652001, 0.502262414, 0.376061738, -0.473672062, 0.53821516, -0.494686633, -0.204152346, 0.265950561, -0.374680042},
    {0.147339582, 0.094928905, -0.216027901, -0.088683151, -0.148751616, 0.048027635, -0.078888707, 0.342726409, 0.194554552, -0.00527766, 0.016445335, 0.320295393, 0.272660255, -0.094677836, -0.138114229, -0.273224056, 0.037028704, 0.159245387, 0.013196134, 0.253458291, 0.210257262, 0.210373133, 0.10527236, -0.096581683, -0.014070416, 0.195012271, 0.098352335, 0.116013549, -0.273181409, 0.188050091, -0.046692759, -0.142929435},
    {0.112001494, -0.628379464, 0.282327235, 0.522194505, 0.208382502, 0.466835082, 0.003577083, -0.457963735, 0.21819976, 0.290708691, 0.024815649, -0.103492461, -0.428650707, -0.060811024, 0.341499269, 0.067947745, 0.09131097, 0.086168669, 0.19499518, -0.298589528, -0.467065156, -0.082261726, 0.171577126, 0.29355523, 0.265614629, -0.319291621, 0.191686779, -0.223599017, -0.230193511, 0.125903085, -0.206929862, 0.064790569},
    {-0.045252267, 0.261585563, -0.27979371, -0.105417944, -0.041735586, 0.128633574, 0.119718701, 0.174336016, 0.186276644, -0.282282472, -0.064234219, -0.083057337, 0.099884212, -0.126594529, 0.038809646, 0.048336726, -0.079596885, -0.227176294, 0.026935315, 0.188725322, 0.147574559, -0.252341777, 0.157534659, -0.066317357, -0.190571904, -0.008302715, -0.041254681, 0.128120348, -0.001667406, 0.025478728, -0.012663108, -0.178927302},
    {-0.012662848, -0.448507249, 0.35051173, 0.183872908, 0.010616183, 0.048638809, 0.053666551, -0.33908841, 0.281625956, 0.160927802, -0.383300334, 0.076751925, -0.211312771, 0.228273422, 0.051172189, 0.217839569, -0.04275246, 0.068112165, 0.250820816, -0.130462691, -0.327809364, 0.040676393, 0.187451482, 0.206674293, 0.019331057, -0.425369948, 0.044704624, -0.21406658, 0.087681673, 0.223313585, -0.310683459, -0.013099646},
    {0.065395378, 0.036416486, 0.314916641, 0.08791171, 0.190305576, -0.130612805, 0.198725685, 0.156483099, -0.346299648, -0.32436049, 0.084847003, 0.054125961, 0.244257152, 0.093537539, 0.395226806, 0.055648901, 0.007391215, 0.015939483, 0.361462265, -0.168196663, 0.235838279, 0.097968765, 0.013938665, 0.032207791, -0.11817912, 0.144574508, -0.091532297, -0.012466652, 0.287769347, -0.415869147, -0.274707854, 0.216521963},
    {0.247617692, -0.054201081, 0.218508065, 0.110193729, 0.174349591, -0.138592467, -0.183286637, 0.203720421, 0.060888078, -0.277647555, 0.236499146, 0.16911979, -0.016947459, -0.016397888, 0.130942822, 0.167036772, 0.170402199, 0.15506433, -0.036548208, -0.036155496, 0.319381475, 0.12366955, 0.089303866, -0.07388778, -0.096861638, 0.054903038, 0.249687657, 0.320367724, 0.2426503, -0.370356411, 0.181408376, 0.185872585},
    {0.287185937, -0.055035543, 0.100766383, 0.219585106, 0.29563272, 0.135050133, -0.152545303, -0.02077725, 0.421736687, 0.169317141, 0.281877279, -0.003282209, 0.038964778, -0.28260681, 0.277552605, 0.017882712, 0.094979867, -0.13359189, 0.203647524, -0.023824729, -0.214092016, -0.03932903, 0.051971979, 0.063365057, 0.26888895, -0.075327136, 0.27042821, -0.263969332, -0.389227003, -0.188471615, 0.154331595, 0.044133388},
    {0.00272069, -0.185928538, 0.22661452, -0.499592572, -0.009141927, 0.204838023, -0.125222623, 0.04144568, -0.292538971, 0.000232604, 0.016506236, -0.213880375, -0.310071766, 0.364088476, 0.038943708, 0.170607254, 0.081336431, 0.059627883, -0.064118028, -0.049418919, -0.261801511, 0.322567791, 0.156895474, 0.066308908, 0.208688438, 0.087074421, 0.346598685, -0.290444493, 0.012123766, 0.213629156, -0.39756313, -0.053284183},
    {-0.068648167, 0.031530675, -0.377842456, -0.275547057, 0.055353485, -0.052889332, 0.191085845, 0.365566343, -0.222179204, -0.225419685, 0.44007352, 0.379303008, 0.426478416, -0.292737216, 0.0061555, 0.209559545, -0.225335225, -0.020835955, -0.209960908, 0.055938482, 0.148267582, -0.183603376, 0.351130813, 0.150712833, 0.30019626, 0.286823481, -0.169113532, -0.029768907, -0.123350397, -0.299913317, -0.010882515, -0.281920701},
    {-0.275426269, -0.341618717, -0.21040611, -0.220377654, 0.051695399, 0.27197656, 0.326195985, 0.162348911, -0.365359247, 0.374717623, -0.0232556, 0.314493477, 0.275676399, -0.026760457, 0.077665001, 0.447375655, -0.316836983, 0.365851194, -0.352440715, -0.116338514, 0.043562185, -0.004278217, 0.047044165, 0.301509202, 0.45885554, 0.223887041, -0.438944787, -0.321426719, -0.165953964, 0.346340537, -0.046437014, -0.105720662},
    {0.158153713, -0.275206566, 0.389530808, 0.629370809, -0.180895805, -0.111933425, -0.064280719, 0.159417391, 0.630331814, 0.070392422, 0.150158539, -0.169720978, 0.030454239, 0.057948619, 0.504879773, -0.226868778, 0.299551189, -0.171908289, 0.248137802, -0.090189688, -0.150679827, 0.196408406, -0.191585094, 0.033352569, 0.017716397, -0.179083392, 0.46883595, 0.048966225, 0.067512423, -0.036988184, -0.375229955, 0.398338467},
    {0.510486484, -0.846981227, 0.573682308, 0.809843421, -0.228328481, 0.066947624, -0.117330581, -0.279978514, 0.708952248, 0.004887505, -0.267335862, -0.046181004, -0.498358071, 0.083046868, 0.421991974, 0.118913628, 0.468021631, 0.172864676, 0.181422204, -0.510475039, -0.495928079, 0.161307529, -0.02627801, -0.096762918, -0.045340363, -0.313800275, 0.787510395, -0.027378825, 0.088205516, -0.010356762, -0.374876648, 0.434731573},
    {-0.098650731, 0.226175711, -0.202768669, 0.161760345, 0.229179576, -0.156336233, 0.230795398, 0.228928834, 0.195402712, -0.246001929, 0.228695586, 0.066382512, 0.211223155, -0.293790787, -0.144838467, 0.1668735, 0.028292442, 0.087136224, -0.222167984, 0.125762179, 0.268994242, -0.183848187, 0.324683815, 0.037739582, 0.127396792, 0.006816275, -0.016507238, 0.09425462, -0.450035185, 0.095837563, -0.025710523, -0.175859317},
    {-0.279658288, 0.22950387, -0.314354628, -0.232597113, -0.004074763, 0.18422398, 0.062061738, 0.110540666, -0.077313088, 0.143027082, 0.150252908, -0.054847501, 0.313080877, -0.117236502, 0.07219936, 0.382015944, -0.088241011, 0.051489253, -0.035463076, 0.203903899, 0.30808875, -0.071701959, 0.047005817, 0.164606586, 0.013913563, 0.196621388, -0.260068357, 0.189726174, 0.035160407, -0.246280074, 0.350425124, 0.074459173},
    {-0.23846972, -0.21007435, -0.13465105, -0.045682352, 0.040535465, 0.12136142, 0.054045592, -0.078532182, 0.180910707, 0.21140267, 0.018132355, 0.182570085, -0.122180492, -0.301215202, -0.31054458, 0.099332735, -0.019898538, 0.294219196, -0.167864546, 0.239085957, -0.255150855, -0.203576475, 0.109535106, 0.284248114, 0.002971157, -0.195241064, -0.190896794, -0.078865238, 0.028248724, 0.108312577, 0.024789643, 0.115386471},
    {0.233820572, -0.225360975, 0.36735338, 0.04580434, -0.365541548, -0.205971599, -0.065591663, -0.136766642, -0.042615768, -0.190958664, -0.041836418, 0.080998421, -0.200138852, 0.196755469, 0.203894004, -0.229725197, 0.162416011, 0.068859138, -0.075436026, 0.133187816, -0.150501415, -0.024250336, -0.312278479, -0.034088843, -0.050433435, -0.366013944, 0.502851546, 0.125542447, 0.088904344, 0.067217961, -0.14333871, 0.294768155},
    {0.107212737, -0.173700586, 0.335398793, 0.253567696, -0.094283663, -0.013699511, -0.266140699, -0.511577964, 0.167737618, 0.013519813, -0.466999084, -0.111293636, -0.400452793, 0.301555544, 0.429817826, -0.123770237, 0.316882998, -0.175834328, 0.301559925, -0.120449476, -0.543672442, 0.280014545, -0.154244274, -0.276571423, -0.049747236, -0.506066382, 0.346322954, -0.049341608, 0.133258015, -0.101417311, -0.212384328, 0.334982455},
    {0.242529109, 0.050446507, 0.081273712, -0.164913431, 0.001514832, 0.012218657, -0.051586542, -0.190866262, -0.024295414, -0.210787445, -0.009666809, -0.17781499, -0.210233644, -0.094987996, -0.048979215, 0.037130538, 0.220219195, -0.081843749, 0.032648146, -0.057116535, -0.067563891, 0.12226326, -0.108020127, 0.127508819, -0.182131425, -0.0305457, 0.13543728, 0.06128541, -0.085517161, 0.081260666, -0.041354902, 0.201707855},
    {0.223918274, 0.189201325, 0.004975957, -0.237226903, 0.024143908, 0.064297102, -0.216840029, -0.019160347, 0.136611119, 0.058337193, -0.235101104, -0.197897688, -0.224796325, 0.221157074, 0.332775265, -0.231353134, 0.128822103, -0.062338982, 0.138956726, -0.096213147, -0.011578111, 0.145690873, -0.231054425, -0.105411097, -0.087243848, -0.153866008, 0.005849313, -0.070374712, 0.038976599, -0.277601391, -0.130192786, 0.158399731},
    {-0.190879941, 0.231456235, 0.103642993, -0.17161274, 0.240716696, -0.362607807, 0.143951133, 0.066140667, 0.041469324, -0.158318147, 0.045143381, 0.213100225, 0.272383064, 0.090981781, -0.121998467, -0.33812049, 0.025147807, 0.033259127, 0.050930332, 0.083743922, 0.27992323, -0.057001028, 0.222280011, -0.355031967, -0.08230637, 0.127170727, -0.11873623, 0.24694635, 0.196437955, -0.253180236, -0.009860466, -0.075000532},
    {0.192703977, -0.074723393, 0.061015654, 0.150101289, -0.339319527, -0.346365064, -0.118890099, -0.061047319, -0.214446038, -0.003410313, 0.04093609, -0.068684295, 0.065425731, 0.264836997, 0.014725718, -0.138669983, 0.124580301, -0.110619865, -0.005429904, 0.226989731, 0.082492575, 0.086291976, -0.021304635, -0.324827313, -0.127124608, 0.145466834, 0.158976078, 0.25202015, 0.159662113, -0.16147688, 0.111659914, 0.170761347},
    {0.233878925, -0.205753997, 0.158944115, -0.195232093, -0.219182193, 0.178775296, -0.08771731, -0.249929741, 0.00431275, -0.210358173, -0.097042054, 0.127017185, -0.111849748, 0.317789674, 0.22452265, -0.056567159, 0.216107816, -0.049711995, 0.146924153, -0.04177577, -0.154314861, 0.093726754, -0.130924612, -0.25932768, -0.06687583, -0.003848914, 0.122705042, -0.140460446, 0.265164614, -0.064701967, -0.005764336, 0.307938039},
    {0.240463406, -0.282355368, -0.054006252, -0.325792819, 0.049536616, -0.330042809, -0.076239966, 0.177918777, -0.31460306, -0.198434919, 0.04223422, -0.143652484, -0.134179488, 0.006219706, -0.005463631, 0.032968741, 0.074427247, 0.11570996, 0.045052018, -0.118937679, 0.325794995, 0.074140504, -0.005990786, 0.193961754, 0.100019626, 0.266542435, 0.247176081, 0.005996376, 0.257464737, -0.317505598, 0.217470884, 0.014941958},
    {-0.209303096, 0.010980191, -0.194073588, 0.027109439, -0.095503353, -0.043416634, 0.191890597, -0.003270023, 0.124013864, -0.206362128, 0.072235569, 0.229256228, 0.0338814, -0.333251864, -0.249625191, 0.08442387, -0.129775554, 0.216832042, -0.038611803, 0.298648357, 0.133045033, -0.152049959, 0.29715246, 0.136780813, 0.12869975, 0.285229117, -0.105866112, 0.241834208, -0.150946781, -0.154873848, 0.219977379, -0.139900878},
    {-0.140772089, 0.307211131, 0.152463391, -0.040017206, 0.22129944, -0.133364454, -0.019058997, 0.348201573, -0.168186933, -0.151503503, 0.186842263, 0.207091346, 0.023360142, -0.021730788, -0.17110467, -0.284479171, 0.045240551, -0.223652154, -0.054093, -0.055090353, -0.077447325, -0.180195093, 0.218114957, -0.025636561, 0.151282489, -0.016558852, 0.018478151, 0.345806241, -0.027940614, -0.150292143, 0.314679295, 0.154803097},
    {-0.150023088, 0.381391197, 0.026121803, 0.040638495, 0.256604224, -0.2161991, 0.16158548, -0.032413524, -0.034575291, -0.049852218, -0.058788992, 0.057823699, 0.230775729, -0.353404939, -0.194948018, -0.193365753, 0.141687661, -0.126309484, 0.025561754, 0.2503829, -0.173615098, 0.048241269, -0.074413307, -0.350523353, -0.081977554, 0.120948263, -0.131876349, -0.128289893, -0.476116121, -0.305063039, 0.316682935, 0.152288556},
    {0.2099953, -0.056385562, 0.049841229, -0.164100751, -0.099919587, -0.12874499, 0.114740275, -0.094279625, -0.100737423, -0.208975211, -0.173094586, -0.237017334, 0.172296226, 0.288830966, 0.088442087, -0.06308414, 0.214920342, -0.059616081, 0.032463986, 0.173741207, -0.265597552, 0.17321153, -0.096677423, -0.062112737, -0.103781462, -0.018983815, 0.161847234, -0.219585866, 0.076161355, -0.019049415, -0.026167672, 0.163259059},
    {0.128974631, -0.099670604, 0.040658288, 0.278310359, 0.205186039, -0.486973703, 0.002880984, 0.086481884, 0.137188226, -0.0739417, 0.076881915, 0.054114033, 0.000738358, -0.273242086, 0.299557418, -0.291241527, -0.023863126, -0.200134009, 0.210125908, 0.13976258, 0.282278389, -0.025264235, 0.101674795, -0.347285688, 0.034306973, 0.188841507, 0.161284655, -0.013656893, -0.068454318, -0.264436007, 0.178471059, 0.151981711},
    {0.280663937, 0.09156426, 0.354077995, 0.345720291, -0.008117314, 0.013407715, -0.062556632, -0.096139356, 0.488280088, 0.073650293, 0.104021512, -0.353046596, -0.179889321, -0.173664272, 0.124807321, 0.194113567, 0.223321155, -0.128399342, 0.258412063, -0.061368641, -0.106636323, 0.184282497, -0.365286648, -0.083856314, 0.039961092, -0.098907337, -0.017042823, 0.048048835, -0.07049901, 0.067745917, -0.225167021, 0.211631581},
    {-0.241037056, 0.306344032, -0.105441645, -0.292778403, 0.089497805, 0.247385457, -0.092951037, 0.215781435, -0.166155964, 0.202265516, 0.173632368, 0.122498386, 0.140657261, -0.089766331, -0.012531416, -0.031648159, -0.00431076, -0.005945824, 0.107123144, -0.125472963, 0.252911657, -0.050486293, -0.13695924, -0.067629978, 0.301104158, -0.042667419, -0.077240624, -0.039316531, -0.050264634, -0.074988857, -0.023302967, 0.006816607},
    {0.041812364, 0.009142954, 0.035431441, -0.350586563, 0.148554295, -0.020923961, 0.039705172, 0.336255908, -0.214658529, -0.376871616, -0.021861795, 0.037192009, 0.334163964, 0.243496642, -0.007824684, 0.089463808, 0.135531306, -0.08814507, -0.086972229, 0.170101449, 0.26390937, -0.189488247, 0.24498193, -0.164348066, -0.014136654, 0.089036398, 0.145996734, 0.181029633, 0.23926425, -0.079815283, 0.172201976, -0.209910497},
    {0.365499347, -0.125457555, 0.414808273, 0.555670261, -0.208290815, -0.193024009, -0.557440102, -0.473529398, 0.619306147, -0.086157888, -0.349179924, -0.289913952, 0.00406474, -0.233837098, 0.361260772, -0.18625547, 0.227078348, -0.049212664, 0.36848861, -0.158066213, -0.143657893, -0.009763945, -0.043317702, -0.020936958, -0.325904816, -0.07544703, 0.633274734, -0.046438217, -0.3135041, -0.323833346, -0.004319847, -0.017304396},
    {0.002808226, -0.308735073, 0.158936292, -0.834835529, 0.062251836, 0.088054538, -0.061437473, 0.083687894, -0.453000188, 0.096634425, -0.183763757, 0.322424859, -0.200970218, -0.008630984, 0.298188806, 0.331105888, 0.249349132, 0.0970186, -0.011401268, -0.132388517, -0.203983977, 0.029733261, 0.153312817, 0.160311058, -0.072987743, 0.1515591, -0.125955135, -0.362313747, 0.339249223, 0.289551646, -0.223790139, -0.102063291},
    {-0.41239205, -0.054175127, -0.39150539, -0.391094804, 0.372210473, 0.429188669, 0.457669437, 0.324573904, -0.379772514, 0.329777718, 0.433931947, 0.349468708, 0.358694732, -0.549507976, -0.417443156, 0.258332133, -0.342860073, 0.322763234, -0.360555559, -0.118544675, 0.302294374, -0.384410053, 0.242824361, 0.207481191, 0.543714702, 0.086589538, -0.355021536, -0.02462876, -0.08201851, 0.294749439, -0.031189511, -0.101228312},
    {0.155332655, -0.55779618, 0.274600565, 0.450437129, -0.036132265, 0.290160537, 0.002371987, -0.570899487, 0.265367121, 0.199206546, -0.288029969, -0.147557944, -0.366361618, -0.051770527, -0.054842137, 0.245714709, -0.341123551, 0.037617717, -0.055646762, -0.148740888, -0.383194417, 0.08243677, 0.103851326, 0.249167547, 0.103052773, -0.436985493, 0.027899569, -0.248521745, -0.057128679, 0.293210268, -0.525509298, 0.282815605},
    {-0.216018289, -0.10381151, -0.427305251, -0.170344368, -0.045494191, 0.454248637, 0.476687342, 0.187830389, -0.023929857, 0.104446046, 0.248743579, 0.401841551, 0.170227051, -0.166737035, -0.113248788, 0.151085749, -0.004962034, 0.153544515, -0.318923205, -0.115456194, 0.058376331, -0.349857479, 0.313587576, 0.323658317, 0.465897113, 0.253934115, -0.235881507, -0.058488447, -0.022176815, 0.138096228, 0.125191748, -0.284222633},
    {-0.140668064, -0.20511812, 0.199049592, 0.018397287, -0.311944157, -0.30510366, -0.476220697, -0.205987871, 0.064529605, -0.353399009, -0.385008872, -0.228085011, 0.109444648, 0.005572741, 0.122166127, -0.270511985, -0.050008148, -0.214275733, 0.044662803, -0.367175043, -0.393786192, 0.182085603, -0.454946011, -0.088188149, -0.193820462, -0.417460501, 0.151568696, -0.071573123, 0.132128224, -0.353774905, -0.083349027, 0.113567255},
    {0.405584723, -0.345291585, 0.080149926, 0.336068541, 0.052689876, -0.169838116, -0.02579823, 0.045352221, 0.044322755, -0.096273951, -0.045452327, 0.099220008, -0.173873186, -0.105391987, 0.204675406, -0.245805174, 0.165096492, -0.210515946, 0.373605222, -0.18332009, 0.043534338, 0.307616711, -0.112112887, -0.123511493, 0.231606305, 0.119510621, 0.153281033, 0.071077198, 0.096994929, 0.038348716, -0.268690407, 0.291024715},
    {0.133299679, -0.220130622, 0.361047268, 0.522975624, -0.405413926, -0.090801641, -0.390959233, -0.107753441, 0.391132265, -0.241453409, 0.046173148, -0.057295121, -0.081457578, -0.13300775, 0.222101942, -0.329514474, 0.085425764, -0.112920351, 0.409166515, -0.068802655, -0.094064601, 0.37764582, -0.166140661, 0.079345241, -0.19776167, -0.258140266, -0.091674007, -0.321217358, 0.140089616, 0.052410845, -0.256067932, 0.375083923},
    {-0.107592836, -0.268246055, -0.060615409, -0.051297251, 0.215370253, 0.220482931, 0.464515597, 0.176147938, -0.197011113, 0.021128248, 0.178971097, 0.437224776, 0.067540094, -0.262016505, -0.458625019, 0.501255214, -0.210144639, 0.30334425, -0.163710997, -0.169281721, -0.233161628, -0.290816486, 0.463854194, 0.34755075, 0.5429582, 0.022922454, -0.261087984, 0.166690588, -0.248171926, 0.445653528, -0.358221382, -0.341532409},
    {-0.274678975, 0.289460421, -0.194839403, 0.077933446, 0.022282172, 0.33766672, 0.257845521, 0.019125309, 0.084332138, 0.241275907, 0.308580697, -0.037132956, 0.26240921, 0.005090422, -0.114869244, 0.407831609, -0.275073767, 0.32607922, -0.111238822, -0.091315135, 0.354049653, -0.071204044, 0.183328345, 0.045765143, 0.377560645, 0.14067325, -0.25843823, 0.251291156, -0.375968635, 0.001906655, 0.226026475, -0.293988168},
    {-0.026272655, 0.273351282, 0.274465024, 0.039702948, -0.193577096, -0.301411897, 0.159378037, 0.022784203, 0.174064174, -0.025288722, -0.039608836, 0.122817479, 0.209682047, 0.042805918, 0.033833086, -0.211201951, -0.03952745, -0.077547073, 0.238930926, 0.058344655, 0.257063419, 0.062713809, -0.163325906, -0.11990498, -0.255603313, 0.176592827, 0.0101888, 0.140570149, 0.038368873, -0.355183154, 0.178222343, 0.07600636},
    {0.200252712, -0.073710158, 0.429120094, 0.32242167, -0.279880881, -0.209698796, -0.360455602, -0.142253414, -0.001468003, 0.011270253, -0.405753642, -0.171232194, -0.157128304, 0.287500083, 0.016637785, -0.251714438, -0.036300946, -0.26509425, 0.041903097, 0.008964666, -0.509469748, 0.187391624, -0.104452036, -0.070500523, -0.329531521, -0.165889427, 0.447149605, -0.241737068, 0.144032732, 0.083359234, -0.088667162, 0.345532924},
    {-0.24464418, -0.059727911, -0.213202834, -0.087018155, 0.089378789, 0.49030894, 0.453832626, -0.103601746, -0.26174739, 0.353202373, -0.173910379, 0.297669321, -0.185637891, -0.310354024, -0.351225644, 0.527068794, -0.397002697, 0.060166206, -0.350620389, -0.192790166, -0.049372379, -0.24616161, 0.232617512, 0.207254052, 0.243632898, -0.12239892, -0.174482301, -0.203874171, -0.157443166, 0.171697289, -0.25994435, -0.235005632},
    {0.134764239, 0.008759981, -0.014778986, -0.055214297, 0.170129076, 0.014730731, 0.217656523, 0.044170219, -0.104115561, 0.040978812, 0.235677481, -0.067403868, 0.108509339, 0.270351291, 0.384357363, 0.207028657, 0.015463965, -0.216853306, 0.191399962, 0.126883179, 0.275248945, 0.172469258, -0.237216145, -0.318378448, 0.182660699, 0.183562174, 0.36892584, 0.087587252, 0.189489707, -0.183716804, -0.07620611, 0.207342446},
    {0.057760663, 0.169765607, 0.055348035, -0.054069292, -0.020689851, -0.423816621, 0.015330891, 0.091494963, 0.022061255, -0.31825909, 0.129540816, -0.042218618, 0.105445176, -0.140878409, 0.104399711, -0.345662177, -0.195223331, -0.185991675, 0.188792676, 0.05227381, 0.177327007, 0.327488244, -0.063780576, -0.399725795, -0.039628576, 0.217974767, 0.118957132, 0.132608697, -0.209542558, -0.442688882, 0.225326985, 0.168030009},
    {0.305750549, 0.215347707, 0.166260287, 0.377810955, -0.32874018, -0.179671675, -0.364582926, 0.011557309, 0.440589666, -0.324988157, -0.181845456, -0.054611526, -0.009193129, 0.32343486, 0.450129151, -0.25439924, -0.175628513, -0.174689129, 0.206863642, 0.18061921, -0.183394939, 0.233634874, -0.261679173, -0.281822264, -0.277289867, 0.086646855, 0.325381726, 0.077143796, 0.253177762, -0.158021942, 0.040442165, 0.256724954},
    {0.130041599, -0.291854113, -0.206186518, -0.503263533, 0.310154885, 0.224609211, 0.334369898, -0.204854593, -0.441495687, 0.403318048, 0.215259865, -0.039647497, 0.009046827, 0.081638999, 0.151335999, 0.252619565, 0.216512561, 0.094409287, 0.047155425, -0.09229479, -0.029491322, 0.076682486, 0.003947048, 0.31499362, 0.095059037, -0.185496151, 0.21917209, -0.43797493, 0.036419801, 0.281870306, -0.445059955, 0.136149943},
    {-0.120219581, 0.017648438, -0.099634625, 0.046109628, -0.072647773, -0.200327635, -0.332676798, -0.144457176, -0.065291755, -0.213303417, 0.013104863, -0.017559646, -0.035680696, -0.036332119, 0.111339383, -0.095852502, 0.126063198, 0.017911192, 0.16879636, -0.1054511, -0.136560619, 0.153448611, -0.036423579, -0.229982421, -0.13073954, -0.138777226, -0.049097214, -0.189807519, 0.218070626, -0.224989906, 0.111144498, 0.061192729},
    {-0.06253767, 0.17186445, -0.012051021, -0.344616979, -0.059439544, -0.134276062, 0.089254409, 0.083940253, -0.281281203, -0.090002567, 0.375848442, 0.284533769, 0.096247613, 0.172364697, -0.062692985, 0.04589209, 0.001565465, 0.296396524, -0.263831824, 0.05073379, 0.285326779, 0.171676263, 0.323494852, -0.158381879, 0.267434269, 0.283509403, -0.153822735, 0.255000174, 0.206300467, 0.051934883, 0.18185021, -0.246573612},
    {0.184264079, -0.214846298, -0.034479279, 0.042863209, 0.012301961, 0.131768212, 0.245670974, -0.239709824, -0.005854722, -0.156978071, 0.149227425, -0.13700439, -0.151616558, 0.015354, 0.202441722, -0.019829186, -0.097253941, 0.138027832, -0.0644003, -0.182515606, -0.00585659, -0.130812958, -0.214515209, 0.208246276, -0.01404532, -0.220195651, -0.064074166, -0.236788467, -0.056628693, 0.128898203, 0.147072226, 0.06138774},
    {-0.077760391, -0.06876789, -0.163063124, -0.237022802, 0.028642163, 0.10700921, 0.082920849, 0.117935829, -0.162019894, 0.157493517, 0.075113393, 0.035280615, -0.167779952, -0.224096298, 0.02171905, -0.020986829, -0.097539879, 0.277172059, -0.236605182, -0.132794887, -0.213995814, -0.311514586, 0.281042665, -0.069609821, 0.190157041, -0.04127726, -0.165513456, -0.134090096, -0.057947088, 0.420454919, -0.232130155, -0.127973691}
};

float bias_layer_2[NUM_NEURONS_LAYER2] = {0.104500555, 0.208549067, 0.10336145, -0.027536526, -0.103122316, -0.056346092, -0.037545793, 0.012470796, 0.006794085, -0.126409024, -0.051820997, -0.00350631, 0.059994392, 0.082904823, 0.085409917, -0.090957008, -0.012895306, -0.093456306, 0.04914961, 0.075389959, -0.112130634, 0.082980059, -0.071520723, -0.197275877, -0.070038117, -0.1363125, 0.105845056, -0.041401397, 0.04796188, -0.150168911, 0.120232552, 0.017270511};

float weights_output[NUM_NEURONS_LAYER2][OUTPUT_LAYER_SIZE] = {
    {-0.796863258},
    { 0.461610913},
    {-0.37629047},
    {-0.491569251},
    { 0.413475335},
    { 0.514153302},
    { 0.294825435},
    { 0.504626989},
    {-0.477832913},
    { 0.611503005},
    { 0.623040557},
    { 0.515646875},
    { 0.488594711},
    {-0.62509197},
    {-0.19544524},
    { 0.502127647},
    {-0.527036607},
    { 0.623444021},
    {-0.519578993},
    { 0.451400965},
    { 0.423428208},
    {-0.603456557},
    { 0.371193409},
    { 0.527078629},
    { 0.50376147},
    { 0.405191272},
    {-0.32733348},
    { 0.396969914},
    {-0.376467735},
    { 0.486001551},
    { 0.617784023},
    {-0.592075527}
};

float bias_output[OUTPUT_LAYER_SIZE] = {-0.129758656024933};

