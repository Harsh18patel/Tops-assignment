-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 04, 2023 at 07:49 AM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `task3`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `employee_id` int(11) NOT NULL,
  `first_name` varchar(100) DEFAULT NULL,
  `last_name` varchar(100) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `joining_date` varchar(100) DEFAULT NULL,
  `department` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`employee_id`, `first_name`, `last_name`, `salary`, `joining_date`, `department`) VALUES
(1, 'John', 'Abraham', 1000000, '01-01-13 12.00.00 AM', 'banking'),
(2, 'Michael', 'Clark', 800000, '01-01-13 12.00.00 AM', 'insurence'),
(3, 'Roy', 'Thomas', 700000, '01-02-13 12.00.00 AM', 'banking'),
(4, 'Tom', 'Jose', 600000, '01-02-23 12.00.00 AM', 'insurence'),
(5, 'Jerry', 'Pinto', 650000, '01-02-23 12.00.00 AM', 'insurence'),
(6, 'Philip', 'Mathew', 750000, '01-01-23 12.00.00 AM', 'services'),
(7, 'Testname1', '123', 650000, '01-01-23 12.00.00 AM', 'services'),
(8, 'Testname2', 'Lname%2', 600000, '01-01-23 12.00.00 AM', 'insurence');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `employee_ref_id` int(11) DEFAULT NULL,
  `incentive_date` varchar(100) DEFAULT NULL,
  `incentive_amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`employee_ref_id`, `incentive_date`, `incentive_amount`) VALUES
(1, '01-feb-13', 5000),
(2, '01-feb-13', 3000),
(3, '01-feb-13', 4000),
(1, '01-jan-13', 4500),
(2, '01-jan-13', 3500);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`employee_id`);

--
-- Indexes for table `incentive`
--
ALTER TABLE `incentive`
  ADD KEY `employee_ref_id` (`employee_ref_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `employee_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
