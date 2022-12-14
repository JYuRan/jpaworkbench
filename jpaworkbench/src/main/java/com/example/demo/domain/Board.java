package com.example.demo.domain;

import java.time.LocalDateTime;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.SequenceGenerator;
import javax.persistence.Table;

import lombok.Getter;
import lombok.Setter;
import lombok.ToString;

@Getter
@Setter
@ToString
@Entity
@Table(name = "board")
public class Board {

	@Id
	@SequenceGenerator(name = "BOARD_SEQUENCE_GEN", sequenceName = "seq_board", 
	initialValue = 1, allocationSize = 1)
	@GeneratedValue(strategy = GenerationType.SEQUENCE, generator = "BOARD_SEQUENCE_GEN")
	@Column(name = "board_no")
	private Long boardNo;
	
	@Column(name = "title")
	private String title;
	
	@Column(name = "content")
	private String content;
	
	@Column(name = "writer")
	private String writer;
	
	@Column(name = "reg_date")
	private LocalDateTime regDate;
	
	
	
}
