# TestPlan and Output
TEST ID| TEST CASE OBJECTIVE| INPUT DATA   | EXPECTED OUTPUT| ACTUAL OUTPUT| STATUS|
|:-----|:-------------------|:-------------|:---------------|:-------------|:------|
|TC_1 |FOR WEARING HELMET|SWITCH=1|High|HIGH|PASS|
|TC_2|FOR WEARING HELMET|SWITCH=0|HIGH|LOW|FAIL
|TC_3|FOR CHECKING ALCOHOL|ALC=1|HIGH|HIGH|PASS|
|TC_4|FOR CHECKING ALCOHOL|ALC=0|HIFG|LOW|FAIL|
|TC_5|IGNITION SYSTEM ON|SWITCH==HIGH && ALC==LOW|HIGH|HIGH|PASS|
|TC_6|IGNITION SYSTEM ON|SWITCH==HIGH && ALC==LOW|HIGH|LOW|FAIL|