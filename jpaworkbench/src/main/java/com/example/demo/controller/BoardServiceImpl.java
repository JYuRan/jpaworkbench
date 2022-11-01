package com.example.demo.controller;

import java.util.List;

import org.springframework.data.domain.Sort;
import org.springframework.data.domain.Sort.Direction;
import org.springframework.stereotype.Service;

import com.example.demo.domain.Board;
import com.example.demo.repository.BoardRepository;

import lombok.RequiredArgsConstructor;



@RequiredArgsConstructor
@Service
public class BoardServiceImpl implements BoardService {
	
	private final BoardRepository repository;

	@Override
	public void register(Board board) throws Exception {
		repository.save(board);
	}

	@Override
	public List<Board> list() throws Exception{
		return repository.findAll(Sort.by(Direction.DESC, "boardNo"));
	}

	@Override
	public Board read(Long boardNo) throws Exception{
		return repository.getOne(boardNo);
	}

	@Override
	public void modify(Board board) throws Exception {
		Board boardEntity = repository.getOne(board.getBoardNo());
		
		boardEntity.setTitle(board.getTitle());
		boardEntity.setContent(board.getContent());
		
		repository.save(boardEntity);
		
	}

}
