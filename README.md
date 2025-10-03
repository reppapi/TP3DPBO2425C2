# TP3DPBO2425C2

## Janji
Saya Repa Pitriani dengan NIM 2402499 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain
dan Pemograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin

# Desain Program: Inheritance & Composition

## Diagram
![Diagram C++](cpp/Dokumentasi/ttpp3.png)

---

## Kelas-kelas

### HouseOldItem
- **Atribut:** `item`, `price`, `room`  
- **Method:** `setItem`, `getItem`, `setPrice`, `getPrice`, `setRoom`, `getRoom`, `printItem`

### BrandInfo
- **Atribut:** `brandName`, `originCountry`, `establishedYear`  
- **Method:** `setBrandName`, `getBrandName`, `setOriginCountry`, `getOriginCountry`, `setEstablishedYear`, `getEstablishedYear`, `printBrand`

### FurnitureItem (extends HouseOldItem, BrandInfo)
- **Atribut tambahan:** `material`, `durability`, `MaterialInfo`  
- **Method:** `setMaterial`, `getMaterial`, `setDurability`, `getDurability`, `printFurniture`

### ApplianceItem (extends HouseOldItem, BrandInfo)
- **Atribut tambahan:** `powerType`, `warranty`, `PowerTypeInfo`, `WarrantyInfo`  
- **Method:** `setPowerType`, `getPowerType`, `setWarranty`, `getWarranty`, `printAppliance`

### MaterialInfo
- **Atribut:** `type`, `qualityGrade`  
- **Method:** `setType`, `getType`, `setQualityGrade`, `getQualityGrade`, `printMaterial`

### PowerTypeInfo
- **Atribut:** `sourceType`, `wattage`  
- **Method:** `setSourceType`, `getSourceType`, `setWattage`, `getWattage`, `printPowerSource`

### WarrantyInfo
- **Atribut:** `duration`, `coverageDetails`  
- **Method:** `setDuration`, `getDuration`, `setCoverageDetails`, `getCoverageDetails`, `printWarranty`

### RoomInfo
- **Atribut:** `roomName`, `floorLevel`  
- **Method:** `setRoomName`, `getRoomName`, `setFloorLevel`, `getFloorLevel`, `printRoom`

---

## Hubungan Desain

- **Inheritance (Hierarki):**  
  `HouseOldItem` → `FurnitureItem` dan `ApplianceItem`.

- **Composition:**  
  - `FurnitureItem` has-a `MaterialInfo` dan terhubung dengan `BrandInfo`.  
  - `ApplianceItem` has-a `PowerTypeInfo` dan `WarrantyInfo` serta terhubung dengan `BrandInfo`.  
  - `HouseOldItem` dapat dikaitkan dengan `RoomInfo`.

- **Multiple:**  
  `FurnitureItem` dan `ApplianceItem` menggabungkan data dari lebih dari satu sumber:  
  mereka mewarisi dari `HouseOldItem`, terhubung dengan `BrandInfo`, serta memiliki kelas pendukung lain sesuai kebutuhan.  

---

## Penjelasan Atribut & Method Tiap Kelas

**HouseOldItem** berfungsi sebagai kelas dasar yang menyimpan informasi umum barang rumah tangga. Atributnya adalah `item` (string), `price` (double), dan `room` (string). Method yang disediakan berupa setter-getter (setItem, getItem, setPrice, getPrice, setRoom, getRoom) untuk tiap atribut dan `printItem()` yang menampilkan isi atribut tersebut ke layar.  

**BrandInfo** menyimpan identitas merek berupa `brandName`, `originCountry`, dan `establishedYear`. Method setter-getter tersedia untuk tiap atribut, serta `printBrand()` yang berfungsi mencetak informasi merek secara lengkap.

**MaterialInfo** dipakai untuk menjelaskan bahan furnitur. Atributnya `type` (string) dan `qualityGrade` (string). Method setter-getter serta `printMaterial()` disediakan untuk mengakses dan menampilkan data bahan.  

**PowerTypeInfo**  digunakan untuk menyimpan detail sumber tenaga sebuah perangkat elektronik. Atributnya `sourceType` (string) dan `wattage` (int). Method setter-getter serta `printPowerSource()` menampilkan data tenaga.  

**WarrantyInfo** menyimpan informasi garansi perangkat. Atributnya `duration` (string) dan `coverageDetails` (string). Method setter-getter serta `printWarranty()` menampilkan data garansi.  

**RoomInfo** menyimpan informasi lokasi ruangan yang lebih detail. Atributnya terdiri dari `roomName` (string) dan `floorLevel` (int). Method setter-getter serta `printRoom()` menampilkan lokasi barang.  

**FurnitureItem** adalah turunan dari `HouseOldItem` yang juga berhubungan dengan `BrandInfo` dan memiliki `MaterialInfo`. Atribut tambahannya `material` dan `durability`. Method `printFurniture()` digunakan untuk menampilkan semua informasi.  

**ApplianceItem** juga turunan dari `HouseOldItem` yang berhubungan dengan `BrandInfo`, serta memiliki `PowerTypeInfo` dan `WarrantyInfo`. Atribut tambahannya `powerType` dan `warranty`. Method `printAppliance()` menampilkan seluruh informasi barang elektronik.  

---

## Dokumentasi

**Cpp**

<img src="cpp/Dokumentasi/Screenshot%202025-10-03%20214951.png" width="500">

**Python**

<img src="python/Dokumentasi/Screenshot%202025-10-03%20215010.png" width="500">

**Java**

<img src="java/Dokumentasi/Screenshot%202025-10-03%20215031.png" width="500">
