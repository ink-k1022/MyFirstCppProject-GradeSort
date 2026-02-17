# MyFirstCppProject-GradeSort
[專案名稱]Student-Score-Manager
語言:C++
這是一個使用 C++ 開發的基礎學生資料管理系統。本專案的主要目的是練習 動態陣列 (Dynamic Array) 的運用，解決編譯時期無法預知資料數量的限制，並實作基礎的資料統計分析。

專案特點
動態記憶體管理：利用 new 與 delete[] 關鍵字，根據使用者輸入的學生人數動態分配記憶體，避免預設固定長度陣列造成的空間浪費。
資料統計演算法：實作線性搜尋與累加演算法，計算全班的平均分數及找出最高分紀錄。
記憶體安全性：嚴格執行記憶體釋放操作，確保程式執行結束後不會發生記憶體洩漏 (Memory Leak)。
觀念：指標 (Pointers)、動態記憶體配置 (DMA)、迴圈控制、基礎統計運算。

功能說明
資料輸入：使用者可自定義學生人數，並逐一輸入學生姓名與對應成績。
平均值計算：自動計算所有學生的平均分數。
最高分篩選：自動比對並輸出該批資料中的最高分數。

執行範例
Plaintext
Number of students：3
姓名：Alice
成績：95
姓名：Bob
成績：82
姓名：Charlie
成績：88

average：88
MaxScore：95

程式碼核心解析
專案中關鍵的動態配置邏輯如下：
// 根據執行時期輸入的 n 來分配記憶體空間
string* names = new string[n];
int* scores = new int[n];

// ... 執行運算 ...

// 確保資源正確釋放
delete[] names;
delete[] scores;
這種做法相比於 int scores[100]，能更彈性地處理不同規模的資料量。
