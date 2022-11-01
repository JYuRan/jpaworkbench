package com.example.demo.controller;

import java.time.LocalDateTime;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import com.example.demo.domain.Board;

import lombok.RequiredArgsConstructor;

@RequiredArgsConstructor
@Controller
@RequestMapping("/board")
public class BoardController {

	private final BoardService service;
	
	@GetMapping("/list")
	public String list(Model model) throws Exception {
		model.addAttribute("list", service.list());
		return "board/list";
	}
	
	@GetMapping("/register")
	public String registerForm(Board board, Model model) throws Exception {
		
		return "board/register";
	}
	
	@PostMapping("/register")
	public String register(Board board, Model model) throws Exception{
		board.setRegDate(LocalDateTime.now());
		service.register(board);
		model.addAttribute("msg", "등록이 완료되었습니다.");
		
		return "board/success";
	}
	
	@GetMapping("/read")
	public void read(Long boardNo, Model model) throws Exception{
		model.addAttribute(service.read(boardNo));
	}
	
	@GetMapping("/modify")
	public void modifyForm(Long boardNo, Model model) throws Exception{
		model.addAttribute(service.read(boardNo));
	}
	@PostMapping("/modify")
	public String modify(Board board, Model model)throws Exception{
		service.modify(board);
		
		model.addAttribute("msg", "수정이 완료되었습니다.");
		
		return "board/success";
		
	}
	
	
}
