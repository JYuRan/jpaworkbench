package com.example.demo.controller;

import java.util.List;

import com.example.demo.domain.Board;

public interface BoardService{
	public void register(Board board) throws Exception;
	public List<Board> list() throws Exception;
	public Board read(Long boardNo) throws Exception;
	public void modify(Board board) throws Exception;

	
	
	
	
	
}
